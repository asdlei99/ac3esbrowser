#ifndef BITSTREAM_READER_H_
#define BITSTREAM_READER_H_

#include <cstddef>
#include <cstdint>

class BitstreamReader
{
public:
  BitstreamReader(const uint8_t *ptr, std::size_t size);
  bool getBit();
  uint32_t getBits(std::size_t num);
  uint32_t showBits(std::size_t num);
  std::size_t available();

private:
  const uint8_t              *m_ptr;
  std::size_t                 m_size;
  std::size_t                 m_posBase;
  std::size_t                 m_posInBase;
};


#endif
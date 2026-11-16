/* f_0x10223c30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10223c30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(COW_IMG(0x10667141u)) & 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10667141u));
        ecx = (self & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10667142u));
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10667141u));
        ecx = (self & 0xffff0000u) | rd16(COW_IMG(0x10485f7au));
        wr8(COW_IMG(0x10667141u), (uint8_t)(eax | 1u));
        t1 = rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)ecx * 4u) + 0x124u);
        wr8(COW_IMG(0x10667142u), t1 >> 1u & 7u);
        eax = (t1 >> 1u & 0xffffff00u) | (t1 >> 1u & 7u);
    }
    if ((uint8_t)eax != (rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)ecx * 4u) + 0x124u) >> 1u & 7u))
    {
        ecx = (rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)ecx * 4u) + 0x124u) >> 1u & 0xffffff00u) | (rd32(rd32(COW_IMG(0x10480af0u) + (uint32_t)(int16_t)ecx * 4u) + 0x124u) >> 1u & 7u);
        goto L_10223c85;
    }
    return eax & 0xffffff00u;
L_10223c85: ;
    wr8(COW_IMG(0x10667142u), (uint8_t)ecx);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10223c30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10223c30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

/* f_0x100bcd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100bcd10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 8u) != 0u)
    {
        eax = 0u;
        edx = 0xffu;
        edi = self + 0x24u;
L_100bcd29: ;
        if ((int16_t)rd16(edi) <= (int32_t)edx)
        {
            ecx = (uint32_t)(int16_t)rd16(edi);
            wr16(self + 0x258u, (uint16_t)eax);
            edx = ecx;
        }
        if ((int32_t)(eax + 1u) < 16)
        {
            eax = eax + 1u;
            edi = edi + 0x20u;
            goto L_100bcd29;
        }
        eax = eax + 1u;
        if (rd8(COW_IMG(0x104804c2u)) != 0u)
        {
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104804c2u));
            goto L_100bcd55;
        }
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104804c2u));
        if (rd8(COW_IMG(0x10487034u)) == 0u) goto L_100bcd5e;
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487034u));
L_100bcd55: ;
        if (rd8(COW_IMG(0x104808f0u)) == 0u) goto L_100bcdc1;
L_100bcd5e: ;
        if (edx != 0xffu)
        {
            t1 = rd32(rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u) + 0x124u) & 0xfffdffffu;
            t2 = rd32(COW_IMG(0x10480af0u) + rd16(self + 2u) * 4u);
            wr32(t2 + 0x124u, t1);
            t3 = rd16(self + rd16(self + 0x258u) * 0x20u + 0x26u);
            wr16(self + 0x256u, (uint16_t)t3);
            g->esp = sp0 - 4u;
            cow_fastcall(g, COW_IMG(0x100bccd0u), self, (edx & 0xffff0000u) | t3, 1, 0x80u);
            t4 = g->ecx;
            wr16(self + rd16(self + 0x258u) * 0x20u + 0x26u, rd16(self + 0x256u));
        }
    }
L_100bcdc1: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100bcd10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100bcd10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

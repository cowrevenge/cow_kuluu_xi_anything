/* f_0x100b2dd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100b2dd0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if ((uint32_t)(int8_t)rd8(COW_IMG(0x10488208u)) == 0u) goto L_100b2e0b;
    eax = (uint32_t)(int8_t)rd8(COW_IMG(0x10488208u));
    if (eax == 1u) goto L_100b2e02;
    eax = eax - 1u;
    if (eax != 1u) goto L_100b2e93;
    eax = eax - 1u;
    wr8(COW_IMG(0x104804c2u), 1u);
    wr8(COW_IMG(0x104808f0u), 1u);
    wr8(COW_IMG(0x10487034u), 1u);
    wr8(self + 0x25au, 1u);
    return;
L_100b2e02: ;
    wr8(self + 0x25au, 1u);
    return;
L_100b2e0b: ;
    t1 = rd32(self + 0x260u);
    wr16(self + 0x256u, (uint16_t)(rd16(self + 0x256u) + 1u));
    if (rd16(t1 + 0x164u) != 0u)
    {
        eax = (t1 & 0xffff0000u) | rd16(t1 + 0x164u);
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) != 0u)
        {
            eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
            wr16(eax + 0x14eu, 0u);
            if (rd32(rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 0x260u) + 0x164u) * 4u) + 0x120u) >> 9u & 1u)
            {
                eax = rd32(COW_IMG(0x10480af0u) + rd16(rd32(self + 0x260u) + 0x164u) * 4u);
                edx = rd16(rd32(self + 0x260u) + 0x164u);
                if (rd32(eax + 0xa0u) != 0u)
                {
                    edi = rd32(eax + 0xa0u);
                    g->eax = eax;
                    g->esp = sp0 - 8u;
                    t2 = cow_fastcall(g, COW_IMG(0x1002c8f0u), edi, edx, 1, COW_IMG(0x10330ebcu));
                    t3 = g->edx;
                    if ((uint8_t)t2 != 0u)
                    {
                        eax = t2;
                        edx = t3;
                        g->esp = sp0 - 8u;
                        cow_thiscall(g, COW_IMG(0x100ce160u), edi, 0);
                    }
                }
            }
        }
    }
    wr16(rd32(self + 0x260u) + 0x164u, 0u);
L_100b2e93: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100b2dd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100b2dd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

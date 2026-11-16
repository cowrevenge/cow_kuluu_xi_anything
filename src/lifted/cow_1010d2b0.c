/* f_0x1010d2b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1010d2b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    eax = rd32(self + 0x34u);
    edx = 0u;
L_1010d2bd: ;
    if (rd32(eax + 4u) == 0u) goto L_1010d2d4;
    if (rd32(eax + 8u) == 0u) goto L_1010d2d4;
    ecx = rd32(eax + 8u);
    if ((uint16_t)edx >= rd16(self + 0x44u)) goto L_1010d2d4;
    eax = ecx;
    edx = edx + 1u;
    goto L_1010d2bd;
L_1010d2d4: ;
    wr16(self + 0x44u, (uint16_t)edx);
    if (rd32(eax + 4u) != 0u)
    {
        if (rd32(eax + 8u) == 0u)
        {
            eax = rd32(eax + 8u);
        }
        else
        {
            eax = rd32(eax + 8u);
            edi = eax;
L_1010d2e8: ;
            if (rd32(edi + 4u) == 0u) goto L_1010d33e;
            if (rd32(edi + 8u) == 0u) goto L_1010d33e;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1010d350u), self, 1, rd32(edi));
            t1 = g->edx;
            if (rd32(edi + 4u) == 0u)
            {
                edx = t1;
                esi = edi;
                edi = rd32(edi + 8u);
            }
            else
            {
                eax = rd32(edi + 4u);
                edx = t1;
                esi = edi;
                edi = rd32(edi + 8u);
                t2 = rd32(esi + 8u);
                wr32(eax + 8u, t2);
            }
            if (rd32(esi + 8u) == 0u)
            {
                eax = rd32(esi + 8u);
            }
            else
            {
                eax = rd32(esi + 8u);
                t3 = rd32(esi + 4u);
                wr32(eax + 4u, t3);
                edx = t3;
            }
            wr32(esi + 8u, 0u);
            wr32(esi + 4u, 0u);
            if (rd8(self + 0x28u) == 0u)
            {
                wr32(esi, 0u);
            }
            g->edi = edi;
            g->ebp = self;
            g->esp = sp0 - 0x10u;
            t4 = cow_call_regs(g, COW_IMG(0x1010e7c0u), eax, esi, edx, 1, 0);
            t5 = g->ecx;
            t6 = g->edx;
            g->edx = t6;
            t7 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
            t8 = g->edx;
            wr16(self + 0x2au, (uint16_t)(rd16(self + 0x2au) - 1u));
            eax = t7;
            edx = t8;
            goto L_1010d2e8;
        }
    }
L_1010d33e: ;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010d2b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010d2b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

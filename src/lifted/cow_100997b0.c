/* f_0x100997b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100997b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10099730u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    t4 = cow_call_regs(g, COW_IMG(0x101cc4f0u), t1, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd8(COW_IMG(0x104804ceu)) == 0u)
    {
        loc_4 = self;
    }
    else
    {
        eax = t4;
        ecx = (t5 & 0xffffff00u) | rd8(COW_IMG(0x104804ceu));
        edx = t6;
        if (eax == 0u)
        {
            loc_4 = self;
        }
        else
        {
            eax = 0u;
L_100997d6: ;
            wr16(COW_IMG(0x10483118u) + eax * 2u, 0u);
            wr8(COW_IMG(0x10483138u) + eax, 0u);
            wr8(COW_IMG(0x10483148u) + eax, 0u);
            if ((int32_t)(eax + 1u) < 16)
            {
                eax = eax + 1u;
                goto L_100997d6;
            }
            g->ebx = 0u;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x100e6080u), 5, rd32(COW_IMG(0x104dfd98u)), COW_IMG(0x10483118u), 0x10u, in_ebx, self);
            t7 = g->ecx;
            t8 = g->edx;
            if ((rd32(COW_IMG(0x10482f98u)) & 0x1ffu) == 0u)
            {
                ecx = t7;
                edx = t8;
                loc_4 = self;
                goto L_1009986d;
            }
            eax = rd32(COW_IMG(0x10482f98u));
            edx = t8;
            t9 = (uint16_t)((eax & 0x1ffu) - 0x1000u);
            g->esp = sp0 - 8u;
            t10 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t9);
            if (t10 == 0u)
            {
                loc_4 = self;
                goto L_1009988f;
            }
            eax = t10;
            ecx = 0u;
L_10099832: ;
            t11 = rd32(ecx * 4u + rd32(eax + 0x1548u));
            if ((uint16_t)rd32(ecx * 4u + rd32(eax + 0x1548u)) == 0u)
            {
                loc_4 = t11;
                edx = 0u;
            }
            else
            {
                edx = t11;
                loc_4 = t11;
                edx = edx + 0x600u;
            }
            wr16(COW_IMG(0x10483118u) + ecx * 2u, (uint16_t)edx);
            wr8(COW_IMG(0x10483138u) + ecx, (uint8_t)(loc_4 >> 0x10u));
            wr8(COW_IMG(0x10483148u) + ecx, loc_4 >> 0x18u);
            if ((int32_t)(ecx + 1u) < 16)
            {
                ecx = ecx + 1u;
                goto L_10099832;
            }
            ecx = ecx + 1u;
            edx = (edx & 0xffff0000u) | loc_4 >> 0x10u;
L_1009986d: ;
            g->ebx = 0u;
            g->esp = sp0;
            cow_cdecl(g, COW_IMG(0x100e6080u), 5, rd32(COW_IMG(0x104dfd98u)), COW_IMG(0x10483118u), 0x10u, in_ebx, loc_4);
            wr8(COW_IMG(0x104804ceu), 0u);
            wr8(COW_IMG(0x10483158u), 1u);
        }
    }
L_1009988f: ;
    g->ebx = in_ebx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100997b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100997b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* f_0x1018b6a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1018b6a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(self + 0x1acu, arg1);
    wr32(self + 0x14u, arg1);
    if (arg1 == 0u)
    {
        eax = in_eax;
    }
    else
    {
        if (rd8(rd32(COW_IMG(0x104568fcu)) + 9u) != 0u)
        {
            edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x104568fcu)) + 9u);
        }
        else
        {
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 0x10u, 0x2fu);
            wr32(sp0 - 0x14u, sp0 + 4u);
            g->ecx = arg1;
            g->edx = sp0 + 4u;
            g->esp = sp0 - 8u;
            t1 = cow_stdcall(g, COW_IMG(0x10072290u), 3, sp0 + 4u, 0x2fu, 0u);
            t2 = g->ecx;
            t3 = g->edx;
            if (rd32(t1) == 0u)
            {
                eax = rd32(t1);
                ecx = t2;
                edx = t3;
                goto L_1018b6e5;
            }
            eax = rd32(t1);
            ecx = t2;
            edx = t3;
            if (rd32(eax) == 0u)
            {
                eax = rd32(eax);
                goto L_1018b6e5;
            }
            eax = rd32(eax);
            wr32(sp0 - 0xcu, eax + 0x30u);
            loc_c = eax + 0x30u;
            eax = eax + 0x30u;
L_1018b6e7: ;
            g->esi = self;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_cdecl(g, COW_IMG(0x1018b010u), 1, loc_c);
            t4 = g->edx;
            edx = t4;
        }
        wr32(sp0 - 0xcu, 0x74616577u);
        wr32(sp0 - 0x10u, 5u);
        t5 = rd32(self + 0x1acu);
        wr32(sp0 - 0x14u, t5);
        wr32(sp0 - 0x18u, sp0 + 4u);
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_call_regs(g, COW_IMG(0x10072430u), sp0 + 4u, g->ecx, g->edx, 0, 4, sp0 + 4u, t5, 5u, 0x74616577u);
        t7 = g->edx;
        if (rd32(t6) == 0u)
        {
            edx = t7;
        }
        else
        {
            eax = rd32(t6);
            edx = t7;
            if (rd32(eax) == 0u) goto L_1018b744;
            esi = rd32(eax);
L_1018b713: ;
            wr32(sp0 - 0xcu, 0u);
            g->esp = sp0 - 8u;
            t8 = cow_call_regs(g, COW_IMG(0x10053890u), eax, esi, edx, 0, 1, 0u);
            if (rd32(esi + 8u) == 0u)
            {
                eax = t8;
                ecx = 0u;
            }
            else
            {
                eax = t8;
                esi = rd32(esi + 8u);
                ecx = rd32(esi);
            }
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 0x10u, 5u);
            wr32(sp0 - 0x14u, ecx);
            wr32(sp0 - 0x18u, sp0 - 4u);
            g->edx = sp0 - 4u;
            g->esp = sp0 - 8u;
            t9 = cow_call_regs(g, COW_IMG(0x10072430u), eax, g->ecx, g->edx, 0, 4, sp0 - 4u, ecx, 5u, 0u);
            t10 = g->edx;
            if (rd32(t9) == 0u)
            {
                edx = t10;
                goto L_1018b744;
            }
            eax = rd32(t9);
            edx = t10;
            if (rd32(eax) != 0u)
            {
                esi = rd32(eax);
                goto L_1018b713;
            }
        }
L_1018b744: ;
        t11 = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1acu);
        wr32(sp0 - 0xcu, t11);
        g->eax = rd32(COW_IMG(0x1065cb04u));
        g->edx = edx;
        t12 = rd32(COW_IMG(0x1065cb04u));
        g->esp = sp0 - 8u;
        t13 = cow_thiscall(g, COW_IMG(0x10186d00u), rd32(COW_IMG(0x10631f24u)), 1, t11);
        t14 = g->edx;
        wr32(sp0 - 0xcu, rd32(COW_IMG(0x1065cb04u)));
        t15 = cow_thiscall(g, COW_IMG(0x1018b8d0u), rd32(COW_IMG(0x1065cb04u)), 1, rd32(COW_IMG(0x1065cb04u)));
        eax = t15;
    }
    g->esi = in_esi;
    return eax;
L_1018b6e5: ;
    wr32(sp0 - 0xcu, 0u);
    loc_c = 0u;
    goto L_1018b6e7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018b6a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018b6a0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

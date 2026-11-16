/* f_0x10260a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10260a30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327878u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(sp0 + 8u) != 0u)
    {
        eax = t1;
        edi = rd32(sp0 + 8u);
        loc_c = t1;
        wr32(sp0 - 0x20u, self + 0x7cu);
        wr32(sp0 + 8u, self + 0x7cu);
        g->edx = in_edx;
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0x7cu);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(sp0 - 4u, 0u);
        if (rd32(self + 0x18u) != 0u)
        {
            eax = rd32(self + 0x18u);
            ecx = t2;
            edx = t3;
            if ((int32_t)arg1 > 1)
            {
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, (uint32_t)((int32_t)arg1 >> 0x1fu));
                wr32(sp0 - 0x2cu, arg1);
                wr32(sp0 - 0x30u, arg6);
                wr32(sp0 - 0x34u, arg5);
                wr32(sp0 - 0x38u, arg6);
                wr32(sp0 - 0x3cu, arg5);
                g->edx = (uint32_t)((int32_t)arg1 >> 0x1fu);
                g->esp = sp0 - 0x1cu;
                t4 = cow_stdcall(g, COW_IMG(0x102662e0u), 8, arg5, arg6, arg5, arg6, arg1, (uint32_t)((int32_t)arg1 >> 0x1fu), 0u, 0u);
                t5 = g->edx;
                t6 = (uint32_t)((int32_t)(arg1 - 1u) >> 0x1fu);
                wr32(sp0 - 0x20u, t6);
                wr32(sp0 - 0x24u, arg1 - 1u);
                t7 = arg4 - t5 - (arg3 < t4);
                wr32(sp0 - 0x28u, t7);
                wr32(sp0 - 0x2cu, arg3 - t4);
                g->ecx = arg3 - t4;
                g->edx = t6;
                t8 = cow_stdcall(g, COW_IMG(0x10316840u), 4, arg3 - t4, t7, arg1 - 1u, t6);
                t9 = g->ecx;
                t10 = g->edx;
                wr32(sp0 - 0x20u, t8);
                g->ecx = t9;
                g->edx = t10;
                g->esp = sp0 - 0x14u;
                t11 = cow_cdecl(g, COW_IMG(0x102609d0u), 3, t8, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                t12 = g->ecx;
                t13 = g->edx;
                wr32(edi, t11);
                eax = t11;
                ecx = t12;
                edx = t13;
            }
            else
            {
                wr32(edi, 0u);
            }
        }
        else
        {
            eax = rd32(self + 0x18u);
            ecx = t2;
            edx = t3;
            wr32(edi, 0u);
        }
        wr32(sp0 - 0x20u, self + 0x7cu);
        g->esp = sp0 - 0x1cu;
        cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0x7cu);
        eax = 0u;
    }
    else
    {
        loc_c = t1;
        eax = 0x80004003u;
    }
    wr32(g->fs_base, loc_c);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10260a30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10260a30(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */

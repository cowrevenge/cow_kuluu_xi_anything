/* f_0x10261070 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10261070(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103278f8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    t2 = rd32(rd32(sp0 + 4u) + 0x24u);
    wr32(sp0 - 0x1cu, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
    t4 = g->edx;
    wr32(t3 + 0xcu, arg2);
    wr32(t3 + 0x10u, arg3);
    wr32(sp0 - 4u, 0u);
    if (rd32(t3 + 4u) != 0u)
    {
        eax = rd32(t3 + 4u);
        ecx = arg3;
        edx = t4;
        esi = t3;
        edi = t2;
        goto L_102610e0;
    }
    eax = rd32(t3 + 4u);
    esi = t3;
    edi = t2;
    wr32(sp0 - 0x1cu, esi);
    g->eax = eax;
    g->edx = rd32(esi);
    t5 = rd32(esi);
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, rd32(t5 + 0x14u), arg3, 1, esi);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_102610e0;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    ebx = t6;
    wr32(sp0 - 0x1cu, edi);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, edi);
    t9 = g->edx;
    t10 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t10);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->edx = t9;
    return ebx;
L_102610e0: ;
    wr32(sp0 - 0x1cu, edi);
    wr32(esi + 4u, 2u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, edi);
    t11 = g->edx;
    t12 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t12);
    g->edx = t11;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261070(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261070(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */

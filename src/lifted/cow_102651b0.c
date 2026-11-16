/* f_0x102651b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102651b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t16;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327d98u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(sp0 + 4u) == 0xcu)
    {
        eax = rd32(sp0 + 4u) - 0xcu;
        esi = rd32(sp0 + 4u);
        loc_c = t1;
        edi = 0u;
    }
    else
    {
        eax = rd32(sp0 + 4u) - 0xcu;
        esi = rd32(sp0 + 4u);
        loc_c = t1;
        edi = esi + 4u;
    }
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 + 4u, edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, edi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(esi + 0x44u) != 0u)
    {
        edx = t3;
        goto L_10265206;
    }
    ecx = t2;
    edx = t3;
    if (rd32(esi + 0x48u) != 0u) goto L_10265206;
    eax = rd32(esi + 0x48u);
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, edi);
L_10265256: ;
    t14 = rd32(sp0 - 0xcu);
    t15 = rd32(sp0 - 0x14u);
    t16 = rd32(sp0 - 0x18u);
    wr32(g->fs_base, t14);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t15;
    g->edi = t16;
    return 0u;
L_10265206: ;
    t4 = rd32(esi + 0x20u);
    t5 = rd32(esi + 0x30u);
    wr32(esi + 0x44u, 0u);
    if ((int32_t)t4 >= (int32_t)t5)
    {
        eax = t4;
        t6 = rd32(esi - 0xcu);
        wr32(esi + 0x48u, 0u);
        g->eax = eax;
        g->edx = t6;
        g->esp = sp0 - 0x18u;
        t7 = cow_thiscall(g, rd32(t6 + 0x10u), esi - 0xcu, 0);
        t8 = g->edx;
        eax = t7;
        edx = t8;
        ebx = 1u;
    }
    else
    {
        eax = t4;
        wr32(esi + 0x48u, 1u);
        ebx = 0u;
    }
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t9 = cow_fastcall(g, COW_IMG(0x102650d0u), esi - 0xcu, edx, 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x1cu, edi);
    wr32(sp0 - 4u, 0xffffffffu);
    g->edx = t11;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t10, 1, edi);
    t12 = g->ecx;
    t13 = g->edx;
    if (ebx != 0u)
    {
        ecx = t12;
        edx = t13;
        wr32(sp0 - 0x1cu, esi);
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, rd32(rd32(esi) + 8u), ecx, 1, esi);
    }
    goto L_10265256;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102651b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102651b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

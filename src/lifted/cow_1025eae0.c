/* f_0x1025eae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025eae0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327673u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, self + 0xc4u);
    wr32(sp0 - 0x14u, self + 0xc4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0xc4u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = rd32(sp0 + 4u);
        ecx = t2;
        edx = t3;
        goto L_1025eb39;
    }
    eax = rd32(sp0 + 4u);
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x24u, self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0xc4u);
    t4 = g->edx;
    t5 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t5);
    g->edx = t4;
    return 0u;
L_1025eb39: ;
    if (rd32(self + 0x78u) != 0u) goto L_1025ebcd;
    wr32(sp0 - 0x24u, 0xe0u);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0 - 0x18u;
    t6 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0xe0u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x10u, t6);
    if (t6 == 0u)
    {
        ecx = t7;
        edx = t8;
        eax = 0u;
    }
    else
    {
        eax = t6;
        edx = t8;
        wr32(sp0 - 0x24u, COW_IMG(0x10385e28u));
        wr32(sp0 - 0x28u, sp0 + 4u);
        wr32(sp0 - 0x2cu, self);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t9 = cow_thiscall(g, COW_IMG(0x1025f8d0u), eax, 3, self, sp0 + 4u, COW_IMG(0x10385e28u));
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    wr32(self + 0x78u, eax);
    if (eax != 0u) goto L_1025eb9e;
    wr32(sp0 - 0x24u, self + 0xc4u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0xc4u);
    t12 = g->edx;
    t13 = rd32(sp0 - 0xcu);
    t14 = rd32(sp0 - 0x18u);
    t15 = rd32(sp0 - 0x1cu);
    t16 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t13);
    g->ebx = t14;
    g->esi = t15;
    g->edi = t16;
    g->edx = t12;
    return 0u;
L_1025eb9e: ;
    if ((int32_t)rd32(sp0 + 4u) >= 0) goto L_1025ebcd;
    wr32(sp0 - 0x24u, 1u);
    g->eax = eax;
    g->edx = rd32(eax);
    t17 = rd32(eax);
    g->esp = sp0 - 0x20u;
    t18 = cow_thiscall(g, rd32(t17 + 0xcu), eax, 1, 1u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x24u, self + 0xc4u);
    wr32(self + 0x78u, 0u);
    g->edx = t20;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), t19, 1, self + 0xc4u);
    t21 = g->edx;
    t22 = rd32(sp0 - 0xcu);
    t23 = rd32(sp0 - 0x18u);
    t24 = rd32(sp0 - 0x1cu);
    t25 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t22);
    g->ebx = t23;
    g->esi = t24;
    g->edi = t25;
    g->edx = t21;
    return 0u;
L_1025ebcd: ;
    wr32(sp0 - 0x24u, self + 0xc4u);
    g->edx = edx;
    t26 = rd32(self + 0x78u);
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, self + 0xc4u);
    t27 = g->edx;
    t28 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t28);
    g->edx = t27;
    return t26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025eae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025eae0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

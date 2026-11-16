/* f_0x10264660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10264660(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
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
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327c98u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    wr32(sp0 - 0x2cu, self + 0xa4u);
    wr32(sp0 - 0x18u, self + 0xa4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 0xa4u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(self + 0xc4u) != 2u)
    {
        eax = rd32(self + 0xc4u);
        edx = t3;
        ebx = self + 0xa4u;
        ebp = rd32(COW_IMG(0x10329188u));
        goto L_102646ec;
    }
    eax = rd32(self + 0xc4u);
    ecx = t2;
    edx = t3;
    ebp = rd32(COW_IMG(0x10329188u));
L_102646aa: ;
    wr32(sp0 - 0x2cu, self + 0xa4u);
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, ebp, ecx, 1, self + 0xa4u);
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, sp0 - 0x14u);
    wr32(sp0 - 0x38u, 2u);
    t4 = rd32(self + 0xbcu);
    wr32(sp0 - 0x14u, t4);
    t5 = rd32(self + 0xd0u);
    wr32(sp0 - 0x10u, t5);
    g->eax = t4;
    g->edx = sp0 - 0x14u;
    t6 = cow_thiscall(g, rd32(COW_IMG(0x103291c0u)), t5, 4, 2u, sp0 - 0x14u, 0u, 0xffffffffu);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x2cu, self + 0xa4u);
    g->edx = t8;
    t9 = cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), t7, 1, self + 0xa4u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t6 != 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        ebx = t6;
        goto L_10264711;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    if (rd32(self + 0xc4u) == 2u) goto L_102646aa;
    ebx = rd32(sp0 - 0x18u);
L_102646ec: ;
    wr32(sp0 - 0x2cu, ebx);
    t35 = rd32(self + 0xccu) + 1u;
    wr32(self + 0xccu, t35);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, ebp, t35, 1, ebx);
    t36 = g->edx;
    t37 = rd32(sp0 - 0xcu);
    wr32(g->fs_base, t37);
    g->edx = t36;
    return 0u;
L_10264711: ;
    if (ebx == 1u) goto L_1026475d;
    if (ebx == 0xffffffffu) goto L_1026473a;
    t12 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t12);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, ebp, ecx, 1, t12);
    t13 = g->edx;
    t14 = rd32(sp0 - 0xcu);
    t15 = rd32(sp0 - 0x1cu);
    t16 = rd32(sp0 - 0x20u);
    t17 = rd32(sp0 - 0x24u);
    t18 = rd32(sp0 - 0x28u);
    wr32(g->fs_base, t14);
    g->ebx = t15;
    g->esi = t17;
    g->edi = t18;
    g->ebp = t16;
    g->edx = t13;
    return 0x8000ffffu;
L_1026473a: ;
    g->esp = sp0 - 0x28u;
    t19 = cow_fastcall(g, COW_IMG(0x10266ad0u), ecx, edx, 0);
    t20 = g->edx;
    t21 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t21);
    g->edx = t20;
    cow_thiscall(g, ebp, t21, 1, t21);
    t22 = g->edx;
    t23 = rd32(sp0 - 0xcu);
    t24 = rd32(sp0 - 0x1cu);
    t25 = rd32(sp0 - 0x20u);
    t26 = rd32(sp0 - 0x24u);
    t27 = rd32(sp0 - 0x28u);
    wr32(g->fs_base, t23);
    g->ebx = t24;
    g->esi = t26;
    g->edi = t27;
    g->ebp = t25;
    g->edx = t22;
    return t19;
L_1026475d: ;
    t28 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x2cu, t28);
    g->edx = t28;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, ebp, ecx, 1, t28);
    t29 = g->edx;
    t30 = rd32(sp0 - 0xcu);
    t31 = rd32(sp0 - 0x1cu);
    t32 = rd32(sp0 - 0x20u);
    t33 = rd32(sp0 - 0x24u);
    t34 = rd32(sp0 - 0x28u);
    wr32(g->fs_base, t30);
    g->ebx = t31;
    g->esi = t33;
    g->edi = t34;
    g->ebp = t32;
    g->edx = t29;
    return 0x80040223u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10264660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10264660(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

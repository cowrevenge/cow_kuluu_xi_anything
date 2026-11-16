/* f_0x10261640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10261640(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103279b8u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    t2 = rd32(rd32(sp0 + 4u) + 0x2cu);
    wr32(sp0 - 0x28u, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    wr32(sp0 - 0x10u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, t2);
    t4 = g->edx;
    wr32(t3 + 0x14u, arg2);
    wr32(t3 + 0x18u, arg3);
    wr32(sp0 - 4u, 0u);
    if (rd32(t3 + 8u) != 0u)
    {
        eax = rd32(t3 + 8u);
        ecx = arg3;
        edx = t4;
        esi = t3;
        edi = t2;
        goto L_102616a4;
    }
    eax = rd32(t3 + 8u);
    esi = t3;
    edi = t2;
    wr32(sp0 - 0x28u, esi);
    g->eax = eax;
    g->edx = rd32(esi);
    t5 = rd32(esi);
    g->esp = sp0 - 0x24u;
    t6 = cow_thiscall(g, rd32(t5 + 0x14u), arg3, 1, esi);
    t7 = g->ecx;
    t8 = g->edx;
    if ((int32_t)t6 >= 0)
    {
        eax = t6;
        ecx = t7;
        edx = t8;
        goto L_102616a4;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    ebx = t6;
    wr32(sp0 - 0x28u, edi);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, edi);
    eax = ebx;
L_10261702: ;
    t21 = rd32(sp0 - 0xcu);
    t22 = rd32(sp0 - 0x18u);
    t23 = rd32(sp0 - 0x1cu);
    t24 = rd32(sp0 - 0x20u);
    t25 = rd32(sp0 - 0x24u);
    wr32(g->fs_base, t21);
    g->ebx = t22;
    g->esi = t24;
    g->edi = t25;
    g->ebp = t23;
    return eax;
L_102616a4: ;
    if (rd32(esi + 8u) == 2u) goto L_102616f2;
    g->eax = rd32(esi - 0xcu);
    g->edx = edx;
    t9 = rd32(esi - 0xcu);
    g->esp = sp0 - 0x24u;
    t10 = cow_thiscall(g, rd32(t9 + 0x18u), esi - 0xcu, 0);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x14u, t10);
    if ((int32_t)t10 <= 0)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        goto L_102616ee;
    }
    eax = t10;
    ebx = t10;
    ebp = 0u;
    edi = esi - 0xcu;
    loc_14 = t10;
L_102616bf: ;
    wr32(sp0 - 0x28u, ebp);
    g->eax = eax;
    g->edx = rd32(edi);
    t13 = rd32(edi);
    g->esp = sp0 - 0x24u;
    t14 = cow_thiscall(g, rd32(t13 + 0x1cu), edi, 1, ebp);
    t15 = g->edx;
    if (rd32(t14 + 0x18u) == 0u)
    {
        eax = t14;
        ecx = rd32(t14 + 0x18u);
        edx = t15;
        goto L_102616e9;
    }
    eax = t14;
    wr32(sp0 - 0x28u, arg3);
    wr32(sp0 - 0x2cu, arg2);
    g->eax = eax;
    g->edx = rd32(eax);
    t16 = rd32(eax);
    g->esp = sp0 - 0x24u;
    t17 = cow_thiscall(g, rd32(t16 + 0x1cu), eax, 2, arg2, arg3);
    t18 = g->ecx;
    t19 = g->edx;
    if ((int32_t)t17 < 0)
    {
        eax = t17;
        ecx = t18;
        ebx = t17;
        goto L_10261717;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    ebx = rd32(sp0 - 0x14u);
L_102616e9: ;
    if ((int32_t)(ebp + 1u) < (int32_t)ebx)
    {
        ebp = ebp + 1u;
        goto L_102616bf;
    }
L_102616ee: ;
    edi = rd32(sp0 + 4u);
L_102616f2: ;
    wr32(sp0 - 0x28u, edi);
    wr32(esi + 8u, 2u);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, edi);
    eax = 0u;
    goto L_10261702;
L_10261717: ;
    t20 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t20);
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, t20);
    eax = ebx;
    goto L_10261702;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10261640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10261640(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */

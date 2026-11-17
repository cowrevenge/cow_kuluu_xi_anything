/* f_0x1025e8d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025e8d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327628u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    t2 = rd32(sp0 + 4u) + 0x70u;
    wr32(sp0 - 0x20u, t2);
    t3 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t2);
    g->edx = in_edx;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, rd32(COW_IMG(0x1032918cu)), 1, t2);   /* kernel32.dll!EnterCriticalSection */
    t4 = g->edx;
    wr32(sp0 - 4u, 0u);
    if (rd32(t3 + 8u) != 1u)
    {
        edx = t4;
        ebx = t2;
        ebp = rd32(t3 + 8u);
        edi = t3;
        goto L_1025e917;
    }
    edx = t4;
    ebx = t2;
    ebp = rd32(t3 + 8u);
    edi = t3;
    wr32(sp0 - 0x20u, ebp);
    g->eax = rd32(edi - 0xcu);
    g->edx = edx;
    t5 = rd32(edi - 0xcu);
    g->esp = sp0 - 0x1cu;
    t6 = cow_thiscall(g, rd32(t5 + 0x30u), edi - 0xcu, 1, ebp);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
L_1025e994: ;
    esi = eax;
L_1025e996: ;
    wr32(sp0 - 0x20u, ebx);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_stdcall(g, rd32(COW_IMG(0x10329188u)), 1, ebx);   /* kernel32.dll!LeaveCriticalSection */
    t30 = g->edx;
    t31 = rd32(sp0 - 0xcu);
    t32 = rd32(sp0 - 0x14u);
    t33 = rd32(sp0 - 0x18u);
    t34 = rd32(sp0 - 0x1cu);
    wr32(g->fs_base, t31);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = t33;
    g->edi = t34;
    g->ebp = t32;
    g->edx = t30;
    return esi;
L_1025e917: ;
    if (rd32(rd32(edi + 0x6cu) + 0x18u) != 0u)
    {
        eax = rd32(rd32(edi + 0x6cu) + 0x18u);
        ecx = rd32(edi + 0x6cu);
        goto L_1025e932;
    }
    eax = rd32(rd32(edi + 0x6cu) + 0x18u);
    t9 = rd32(edi - 0xcu);
    wr32(edi + 8u, 1u);
    wr32(sp0 - 0x20u, 1u);
    ecx = edi - 0xcu;
    edx = t9;
    loc_10 = in_ebx;
    loc_14 = in_ebp;
    loc_18 = in_esi;
    loc_1c = in_edi;
    loc_20 = 1u;
L_1025e991: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t27 = cow_thiscall(g, rd32(edx + 0x30u), ecx, 1, loc_20);
    t28 = g->ecx;
    t29 = g->edx;
    eax = t27;
    ecx = t28;
    edx = t29;
    goto L_1025e994;
L_1025e932: ;
    wr32(sp0 - 0x20u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x1cu;
    t10 = cow_fastcall(g, COW_IMG(0x10261590u), ecx, edx, 1, edi);
    t11 = g->ecx;
    t12 = g->edx;
    if ((int32_t)t10 < 0)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        esi = t10;
        goto L_1025e996;
    }
    eax = t10;
    edx = t12;
    wr32(sp0 - 0x20u, 1u);
    g->esp = sp0 - 0x1cu;
    cow_fastcall(g, COW_IMG(0x1025f6d0u), edi - 0xcu, edx, 1, 1u);
    t13 = g->edx;
    g->eax = rd32(edi - 0xcu);
    t14 = rd32(edi - 0xcu);
    t15 = cow_thiscall(g, rd32(t14 + 0x80u), edi - 0xcu, 0);
    wr32(sp0 - 0x20u, 1u);
    g->edx = rd32(edi - 0xcu);
    t16 = rd32(edi - 0xcu);
    cow_thiscall(g, rd32(t16 + 0x28u), edi - 0xcu, 1, 1u);
    t17 = g->edx;
    g->eax = rd32(edi - 0xcu);
    g->edx = t17;
    t18 = rd32(edi - 0xcu);
    t19 = cow_thiscall(g, rd32(t18 + 0x6cu), edi - 0xcu, 0);
    t20 = g->edx;
    cow_fastcall(g, COW_IMG(0x1025f590u), edi - 0xcu, t20, 0);
    t21 = g->edx;
    if (rd32(rd32(edi + 0x6cu) + 0x9cu) == 0u)
    {
        eax = rd32(rd32(edi + 0x6cu) + 0x9cu);
        edx = t21;
        esi = edi - 0xcu;
    }
    else
    {
        eax = rd32(rd32(edi + 0x6cu) + 0x9cu);
        ecx = rd32(edi + 0x6cu);
        esi = edi - 0xcu;
        wr32(sp0 - 0x20u, eax);
        g->eax = eax;
        g->edx = rd32(eax);
        t22 = rd32(eax);
        g->esp = sp0 - 0x1cu;
        t23 = cow_thiscall(g, rd32(t22 + 0x14u), ecx, 1, eax);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    if (ebp == 0u)
    {
        t25 = rd32(esi);
        wr32(edi + 0x54u, ebp);
        g->eax = t25;
        g->esp = sp0 - 0x1cu;
        t26 = cow_thiscall(g, rd32(t25 + 0x70u), esi, 0);
        eax = t26;
    }
    wr32(sp0 - 0x20u, ebp);
    ecx = esi;
    edx = rd32(esi);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
    loc_1c = rd32(sp0 - 0x1cu);
    loc_20 = ebp;
    goto L_1025e991;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025e8d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025e8d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

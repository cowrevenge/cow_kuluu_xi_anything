/* f_0x100fa4a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100fa4a0(Guest* g)
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(COW_IMG(0x104dfd98u), arg1);
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100f91c0u), 3, sp0 - 8u, in_esi, rd32(sp0 - 8u));
    t2 = g->edx;
    t3 = rd32(arg1 + 0x417cu);
    wr32(sp0 - 0x14u, t3);
    wr32(sp0 - 0x18u, 0u);
    g->ecx = t3;
    g->esp = sp0 - 0x10u;
    t4 = cow_call_regs(g, COW_IMG(0x100dbfe0u), g->eax, g->ecx, t2, 1, 2, 0u, t3);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 == 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    else
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        wr32(sp0 - 0x10u, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x100fa9f0u), ecx, 1, arg1);
        t8 = g->ecx;
        t9 = g->edx;
        eax = t7;
        ecx = t8;
        edx = t9;
    }
    wr32(sp0 - 0x10u, arg1);
    g->esp = sp0 - 0xcu;
    cow_thiscall_cdecl(g, COW_IMG(0x100fa5c0u), ecx, 1, arg1);
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x418cu) == rd32(rd32(COW_IMG(0x104dfd98u)) + 0x4188u))
    {
        ecx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x4188u);
        edx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x418cu);
        goto L_100fa54d;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    ecx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x4188u);
    edx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x418cu);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t11 = g->edx;
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x418cu) <= t10)
    {
        eax = t10;
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = t11;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t13 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        eax = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x418cu);
        ecx = t13;
        edx = rd32(COW_IMG(0x104dfd98u));
    }
    else
    {
        eax = t10;
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = t11;
        g->eax = eax;
        g->esp = sp0 - 8u;
        t12 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
        eax = t12;
        ecx = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x418cu);
        edx = rd32(COW_IMG(0x104dfd98u));
    }
    wr32(edx + 0x4190u, ecx - eax);
    t14 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x4188u);
    t15 = rd32(COW_IMG(0x104dfd98u));
    wr32(t15 + 0x418cu, t14);
    return (t15 & 0xffffff00u) | 1u;
L_100fa54d: ;
    wr32(sp0 - 0xcu, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t16 = cow_cdecl(g, COW_IMG(0x100f91c0u), 3, sp0 - 8u, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x10u, 0x3e8u);
    wr32(sp0 - 0x14u, 6u);
    g->ecx = t17;
    g->esp = sp0 - 0xcu;
    t19 = cow_call_regs(g, COW_IMG(0x100dbfe0u), g->eax, g->ecx, t18, 1, 2, 6u, 0x3e8u);
    t20 = g->ecx;
    t21 = g->edx;
    if ((uint8_t)t19 == 0u)
    {
        eax = t19;
        goto L_100fa5b5;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t22 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t23 = g->edx;
    if (rd32(rd32(COW_IMG(0x104dfd98u)) + 0x418cu) <= t22)
    {
        eax = t22;
        ecx = rd32(COW_IMG(0x104dfd98u));
        edx = t23;
        goto L_100fa59c;
    }
    eax = t22;
    ecx = rd32(COW_IMG(0x104dfd98u));
    edx = t23;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t24 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t25 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x418cu) - t24;
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x4190u, t25);
    return (t24 & 0xffffff00u) | 1u;
L_100fa59c: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t26 = cow_stdcall(g, COW_IMG(0x100dc060u), 0);
    t27 = t26 - rd32(rd32(COW_IMG(0x104dfd98u)) + 0x418cu);
    wr32(rd32(COW_IMG(0x104dfd98u)) + 0x4190u, t27);
    eax = t26;
L_100fa5b5: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fa4a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fa4a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

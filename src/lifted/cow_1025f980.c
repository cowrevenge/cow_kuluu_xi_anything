/* f_0x1025f980 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025f980(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x103277e0u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    t2 = rd32(rd32(sp0 + 4u) + 0xccu) + 0x7cu;
    wr32(sp0 - 0x24u, t2);
    t3 = rd32(sp0 + 4u);
    t4 = rd32(COW_IMG(0x1032918cu));
    wr32(sp0 + 4u, t2);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t5 = cow_thiscall(g, t4, self, 1, t2);
    t6 = g->ecx;
    t7 = g->edx;
    wr32(sp0 - 4u, 0u);
    t8 = rd32(t3 + 0xccu) + 0x94u;
    wr32(sp0 - 0x24u, t8);
    wr32(sp0 - 0x10u, t8);
    g->edx = t7;
    cow_thiscall(g, t4, t6, 1, t8);
    t9 = g->edx;
    t10 = rd32(t3 - 0xcu);
    wr8(sp0 - 4u, 1u);
    g->eax = t10;
    g->edx = t9;
    t11 = cow_thiscall(g, rd32(t10 + 0x38u), t3 - 0xcu, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 != 0u)
    {
        eax = t11;
        ecx = t12;
        edx = t13;
        ebp = t11;
        esi = t2;
        edi = t8;
        loc_14 = in_ebx;
        loc_18 = in_ebp;
        loc_1c = in_esi;
        loc_20 = in_edi;
    }
    else
    {
        eax = t11;
        ebx = t3;
        esi = t2;
        edi = t8;
        g->eax = eax;
        g->edx = rd32(rd32(ebx + 0xccu));
        t14 = rd32(ebx + 0xccu);
        t15 = rd32(rd32(ebx + 0xccu));
        g->esp = sp0 - 0x20u;
        t16 = cow_thiscall(g, rd32(t15 + 0x68u), t14, 0);
        t17 = g->ecx;
        t18 = g->edx;
        if ((int32_t)t16 < 0)
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            ebp = t16;
            loc_14 = in_ebx;
            loc_18 = in_ebp;
            loc_1c = in_esi;
            loc_20 = in_edi;
        }
        else
        {
            eax = t16;
            ecx = t17;
            edx = t18;
            wr32(sp0 - 0x24u, ebx);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t19 = cow_stdcall(g, COW_IMG(0x10262f40u), 1, ebx);
            t20 = g->ecx;
            t21 = g->edx;
            eax = t19;
            ecx = t20;
            edx = t21;
            ebp = t19;
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_20 = rd32(sp0 - 0x20u);
        }
    }
    wr32(sp0 - 0x24u, edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    t22 = rd32(COW_IMG(0x10329188u));
    g->esp = sp0 - 0x20u;
    t23 = cow_stdcall(g, t22, 1, edi);   /* kernel32.dll!LeaveCriticalSection */
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x24u, esi);
    g->edx = t25;
    cow_thiscall(g, t22, t24, 1, esi);
    t26 = g->edx;
    t27 = rd32(sp0 - 0xcu);
    t28 = rd32(sp0 - 0x14u);
    t29 = rd32(sp0 - 0x18u);
    t30 = rd32(sp0 - 0x1cu);
    t31 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t27);
    g->ebx = t28;
    g->esi = t30;
    g->edi = t31;
    g->ebp = t29;
    g->edx = t26;
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f980(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025f980(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

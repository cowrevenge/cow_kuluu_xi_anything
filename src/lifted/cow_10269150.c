/* f_0x10269150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10269150(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_c;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327fbcu));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebp);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 4u, 3u);
    t2 = rd32(self + 0x20u);
    wr32(sp0 - 0x14u, t2);
    if (rd32(self + 0x20u) == 0u)
    {
        eax = t2;
        edx = in_edx;
        loc_c = t1;
        goto L_102691a5;
    }
    edx = in_edx;
    loc_c = t1;
    loc_14 = t2;
L_10269187: ;
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t3 = cow_stdcall(g, COW_IMG(0x10269b90u), 1, sp0 - 0x14u);
    t4 = g->edx;
    wr32(sp0 - 0x24u, t3 + 0xcu);
    g->edx = t4;
    cow_thiscall(g, rd32(rd32(t3 + 0xcu) + 8u), rd32(t3 + 0xcu), 1, t3 + 0xcu);
    t5 = g->edx;
    if (rd32(sp0 - 0x14u) != 0u)
    {
        edx = t5;
        goto L_10269187;
    }
    eax = rd32(sp0 - 0x14u);
    edx = t5;
L_102691a5: ;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10269b20u), self + 0x20u, 0);
    t6 = g->edx;
    t7 = rd32(self + 0x38u);
    wr32(sp0 - 0x14u, t7);
    if (rd32(self + 0x38u) == 0u)
    {
        eax = t7;
        edx = t6;
        goto L_102691d8;
    }
    loc_14 = t7;
L_102691ba: ;
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    g->edx = sp0 - 0x14u;
    g->esp = sp0 - 0x20u;
    t8 = cow_stdcall(g, COW_IMG(0x10269b90u), 1, sp0 - 0x14u);
    t9 = g->edx;
    wr32(sp0 - 0x24u, t8 + 0xcu);
    g->edx = t9;
    cow_thiscall(g, rd32(rd32(t8 + 0xcu) + 8u), rd32(t8 + 0xcu), 1, t8 + 0xcu);
    t10 = g->edx;
    if (rd32(sp0 - 0x14u) != 0u) goto L_102691ba;
    eax = rd32(sp0 - 0x14u);
    edx = t10;
L_102691d8: ;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10269b20u), self + 0x38u, 0);
    t11 = g->edx;
    if (rd32(self + 0x60u) == 0u)
    {
        eax = rd32(self + 0x60u);
        edx = t11;
    }
    else
    {
        eax = rd32(self + 0x60u);
        edx = t11;
        if (rd32(self + 0x54u) != 0u)
        {
            ecx = rd32(self + 0x54u);
            wr32(sp0 - 0x24u, ecx);
            wr32(sp0 - 0x28u, eax);
            g->edx = rd32(eax);
            t12 = rd32(eax);
            g->esp = sp0 - 0x20u;
            cow_thiscall(g, rd32(t12 + 0x18u), ecx, 2, eax, ecx);
            t13 = g->edx;
            wr32(self + 0x54u, 0u);
            edx = t13;
        }
        t14 = rd32(self + 0x60u);
        wr32(sp0 - 0x24u, t14);
        g->eax = t14;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t15 = cow_thiscall(g, rd32(rd32(t14) + 8u), rd32(t14), 1, t14);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    g->eax = eax;
    t17 = rd32(sp0 - 4u);
    g->esp = sp0 - 0x20u;
    t18 = cow_fastcall(g, COW_IMG(0x10265bb0u), self + 0x50u, edx, 0);
    t19 = g->edx;
    g->edx = t19;
    t20 = rd32(sp0 - 4u);
    t21 = cow_thiscall(g, COW_IMG(0x10269ac0u), self + 0x38u, 0);
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_thiscall(g, COW_IMG(0x10269ac0u), self + 0x20u, 0);
    t24 = g->ecx;
    t25 = g->edx;
    wr32(sp0 - 0x24u, self + 8u);
    g->edx = t25;
    t26 = cow_thiscall(g, rd32(COW_IMG(0x103292f4u)), t24, 1, self + 8u);
    t27 = g->edx;
    t28 = rd32(sp0 - 0xcu);
    t29 = rd32(sp0 - 0x18u);
    t30 = rd32(sp0 - 0x1cu);
    t31 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t28);
    g->esi = t30;
    g->edi = t31;
    g->ebp = t29;
    g->edx = t27;
    return t26;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10269150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

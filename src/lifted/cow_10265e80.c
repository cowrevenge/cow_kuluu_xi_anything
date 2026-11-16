/* f_0x10265e80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10265e80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, 0xffffffffu);
    wr32(sp0 - 8u, COW_IMG(0x10327e26u));
    wr32(sp0 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0xcu);
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 4u, 1u);
    if (rd32(self + 8u) == 0u)
    {
        edx = in_edx;
        ebx = rd32(COW_IMG(0x10329104u));
        loc_c = t1;
    }
    else
    {
        eax = rd32(self + 8u);
        ebx = rd32(COW_IMG(0x10329104u));
        loc_c = t1;
        wr32(sp0 - 0x24u, 0xffffffffu);
        wr32(sp0 - 0x28u, eax);
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), self, 2, eax, 0xffffffffu);
        t2 = g->ecx;
        t3 = g->edx;
        t4 = rd32(self + 8u);
        wr32(sp0 - 0x24u, t4);
        g->edx = t3;
        cow_thiscall(g, ebx, t2, 1, t4);
        t5 = g->edx;
        edx = t5;
    }
    t6 = rd32(self + 0xcu);
    wr32(sp0 - 0x14u, t6);
    if (rd32(self + 0xcu) == 0u)
    {
        eax = t6;
        goto L_10265ef0;
    }
    loc_14 = t6;
L_10265ed3: ;
    wr32(sp0 - 0x24u, sp0 - 0x14u);
    g->ecx = self + 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t7 = cow_stdcall(g, COW_IMG(0x10269b90u), 1, sp0 - 0x14u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x24u, t7);
    g->edx = t9;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t7);
    t10 = g->edx;
    if (rd32(sp0 - 0x14u) != 0u)
    {
        edx = t10;
        goto L_10265ed3;
    }
    eax = rd32(sp0 - 0x14u);
    edx = t10;
L_10265ef0: ;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x10269b20u), self + 0xcu, 0);
    t11 = g->ecx;
    t12 = g->edx;
    if (rd32(self + 0x3cu) == 0u)
    {
        eax = rd32(self + 0x3cu);
        ecx = t11;
        edx = t12;
    }
    else
    {
        eax = rd32(self + 0x3cu);
        ecx = t11;
        edx = t12;
        wr32(sp0 - 0x24u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t13 = cow_thiscall(g, ebx, ecx, 1, eax);
        t14 = g->ecx;
        t15 = g->edx;
        eax = t13;
        ecx = t14;
        edx = t15;
    }
    wr32(sp0 - 0x24u, self + 0x24u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t16 = cow_thiscall(g, rd32(COW_IMG(0x103292f4u)), ecx, 1, self + 0x24u);
    t17 = g->edx;
    wr32(sp0 - 4u, 0xffffffffu);
    g->edx = t17;
    t18 = cow_thiscall(g, COW_IMG(0x10269ac0u), self + 0xcu, 0);
    t19 = g->edx;
    t20 = rd32(sp0 - 0xcu);
    t21 = rd32(sp0 - 0x18u);
    t22 = rd32(sp0 - 0x1cu);
    t23 = rd32(sp0 - 0x20u);
    wr32(g->fs_base, t20);
    g->ebx = t21;
    g->esi = t22;
    g->edi = t23;
    g->edx = t19;
    return t18;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10265e80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10265e80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

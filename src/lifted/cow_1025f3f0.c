/* f_0x1025f3f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1025f3f0(Guest* g)
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
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_esi);
    if (rd32(self + 0x70u) == 0u)
    {
        edx = in_edx;
        goto L_1025f4a4;
    }
    if (rd32(self + 0x74u) != 0u)
    {
        edx = in_edx;
        goto L_1025f4a4;
    }
    if (rd32(self + 0xc0u) != 0u)
    {
        edx = in_edx;
        goto L_1025f4a4;
    }
    if (rd32(self + 0x18u) != 0u)
    {
        eax = rd32(self + 0x18u);
        goto L_1025f42b;
    }
    eax = rd32(self + 0x18u);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t1 = cow_fastcall(g, COW_IMG(0x1025f4b0u), self, in_edx, 0);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1025f42b: ;
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(sp0 - 0x1cu, eax);
    g->edx = sp0 - 8u;
    t3 = rd32(self + 0xbcu);
    t4 = rd32(self + 0x24u);
    t5 = rd32(self + 0xb8u);
    t6 = rd32(self + 0x20u);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(eax) + 0xcu), rd32(eax), 2, eax, sp0 - 8u);
    t7 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x2710u);
    t8 = t3 + t4 + (t5 + t6 < t5) - rd32(sp0 - 4u) - (t5 + t6 < rd32(sp0 - 8u));
    wr32(sp0 - 0x20u, t8);
    t9 = t5 + t6 - rd32(sp0 - 8u);
    wr32(sp0 - 0x24u, t9);
    g->eax = rd32(sp0 - 4u);
    g->ecx = rd32(sp0 - 8u);
    g->edx = t7;
    t10 = rd32(sp0 - 4u);
    t11 = rd32(sp0 - 8u);
    t12 = cow_stdcall(g, COW_IMG(0x10316840u), 4, t9, t8, 0x2710u, 0u);
    t13 = g->ecx;
    t14 = g->edx;
    if ((int32_t)t12 >= 50)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_1025f47b;
    }
    eax = t12;
    edx = t14;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t15 = cow_fastcall(g, COW_IMG(0x1025f4b0u), self, edx, 0);
    t16 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t16;
    return t15;
L_1025f47b: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, self);
    wr32(sp0 - 0x18u, COW_IMG(0x1025f380u));
    wr32(sp0 - 0x1cu, 0xau);
    wr32(sp0 - 0x20u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_cdecl(g, COW_IMG(0x10266b20u), 5, eax, 0xau, COW_IMG(0x1025f380u), self, 0u);
    t18 = g->edx;
    wr32(self + 0xc0u, t17);
    if (t17 != 0u)
    {
        edx = t18;
        goto L_1025f4a4;
    }
    eax = t17;
    edx = t18;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t19 = cow_fastcall(g, COW_IMG(0x1025f4b0u), self, edx, 0);
    t20 = g->edx;
    g->esi = rd32(sp0 - 0xcu);
    g->edx = t20;
    return t19;
L_1025f4a4: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025f3f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1025f3f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

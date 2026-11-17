/* f_0x100cefa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_100cefa0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, in_esi);
    if (arg1 != 0x3f6e6921u) goto L_100ceff7;
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_edi);
    edi = 0u;
    loc_4 = in_esi;
    loc_8 = in_ebx;
    loc_c = in_edi;
L_100cefb6: ;
    t1 = rd32(COW_IMG(0x10330f28u) + edi);
    wr32(sp0 - 0x10u, t1);
    wr32(sp0 - 0x14u, 7u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    g->eax = rd32(self);
    g->edx = sp0 + 8u;
    t2 = rd32(self);
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, rd32(t2 + 0x1ecu), self, 3, sp0 + 8u, 7u, t1);
    t4 = g->edx;
    if (rd32(t3) == 0u)
    {
        eax = rd32(t3);
        edx = t4;
    }
    else
    {
        eax = rd32(t3);
        edx = t4;
        wr32(sp0 - 0x10u, arg2);
        wr32(sp0 - 0x14u, self);
        wr32(sp0 - 0x18u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
        t6 = g->edx;
        g->edx = t6;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, COW_IMG(0x10056ef0u), t5, 2, self, arg2);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    if (edi + 4u < 0xcu)
    {
        edi = edi + 4u;
        loc_4 = rd32(sp0 - 4u);
        loc_8 = rd32(sp0 - 8u);
        loc_c = rd32(sp0 - 0xcu);
        goto L_100cefb6;
    }
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return eax;
L_100ceff7: ;
    wr32(sp0 - 8u, arg1);
    wr32(sp0 - 0xcu, 7u);
    wr32(sp0 - 0x10u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = rd32(self);
    t9 = rd32(self);
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, rd32(t9 + 0x1ecu), self, 3, sp0 + 4u, 7u, arg1);
    t11 = g->edx;
    if (rd32(t10) == 0u)
    {
        eax = rd32(t10);
        edx = t11;
    }
    else
    {
        eax = rd32(t10);
        edx = t11;
        wr32(sp0 - 8u, arg2);
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 0x10u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t12 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, eax);
        t13 = g->edx;
        g->edx = t13;
        g->esp = sp0 - 4u;
        t14 = cow_thiscall(g, COW_IMG(0x10056ef0u), t12, 2, self, arg2);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    g->esi = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cefa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cefa0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */

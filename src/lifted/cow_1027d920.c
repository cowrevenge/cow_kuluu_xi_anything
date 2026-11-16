/* f_0x1027d920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1027d920(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    if (rd32(COW_IMG(0x1099d210u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d210u));
        if ((int32_t)rd32(eax) <= -1)
        {
            ecx = self;
            edx = in_edx;
        }
        else
        {
            wr32(sp0 - 8u, eax);
            g->ecx = self;
            g->edx = in_edx;
            g->esp = sp0 - 4u;
            cow_cdecl(g, COW_IMG(0x1027d9a0u), 1, eax);
            t1 = g->ecx;
            t2 = g->edx;
            ecx = t1;
            edx = t2;
        }
    }
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, arg3);
    wr32(sp0 - 0x14u, arg2);
    wr32(COW_IMG(0x1099d210u), arg1);
    g->eax = arg3;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_cdecl(g, COW_IMG(0x10315ebfu), 2, arg2, arg3);
    t4 = g->edx;
    wr32(arg1, t3);
    wr32(sp0 - 0x18u, sp0 - 4u);
    wr32(sp0 - 0x1cu, t3);
    g->edx = t4;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x1027d890u), sp0 - 4u, 5, t3, sp0 - 4u, arg2, arg3, in_edi);
    t6 = g->ecx;
    t7 = g->edx;
    if ((uint8_t)t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        wr32(sp0 - 0x10u, 0x2bau);
        wr32(sp0 - 0x14u, COW_IMG(0x103b4584u));
        wr32(sp0 - 0x18u, COW_IMG(0x103b379cu));
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t8 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b4584u));
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x1cu, arg2);
        wr32(sp0 - 0x20u, COW_IMG(0x103b46a8u));
        g->ecx = t9;
        g->edx = t10;
        g->esp = sp0 - 0x18u;
        t11 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b46a8u), arg2);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x24u, arg1);
        cow_cdecl(g, COW_IMG(0x1027d9a0u), 3, arg1, COW_IMG(0x103b46a8u), arg2);
    }
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return rd32(arg1);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027d920(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

/* f_0x10060010 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10060010(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr32(self, COW_IMG(0x1032b914u));
    if (rd32(COW_IMG(0x10456910u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x10456910u));
        g->edx = in_edx;
        t1 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t1 + 8u), t1, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        wr32(COW_IMG(0x10456910u), 0u);
        ecx = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x10456914u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456914u));
        g->edx = rd32(eax);
        t4 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t4 + 8u), ecx, 1, eax);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(COW_IMG(0x10456914u), 0u);
        ecx = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x10456918u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10456918u));
        g->edx = edx;
        t7 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t7 + 8u), t7, 1, eax);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(COW_IMG(0x10456918u), 0u);
        ecx = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x1045691cu)) != 0u)
    {
        eax = rd32(COW_IMG(0x1045691cu));
        g->edx = rd32(eax);
        t10 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t10 + 8u), ecx, 1, eax);
        t11 = g->edx;
        wr32(COW_IMG(0x1045691cu), 0u);
        edx = t11;
    }
    t12 = rd32(COW_IMG(0x1047bf1cu));
    wr32(COW_IMG(0x1045689cu), 0u);
    wr32(COW_IMG(0x10456920u), 0u);
    if (t12 != self)
    {
        eax = t12;
    }
    else
    {
        eax = t12;
        wr32(COW_IMG(0x1047bf1cu), 0u);
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t13 = cow_fastcall(g, COW_IMG(0x100747c0u), self, edx, 0);
    t14 = g->ecx;
    t15 = g->edx;
    if (!(arg1 & 1u))
    {
        edx = t15;
    }
    else
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x10028710u), 1, self);
        t16 = g->edx;
        edx = t16;
    }
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060010(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10060010(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

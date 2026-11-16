/* f_0x100cfb40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100cfb40(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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

    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t2 = g->edx;
    if (t1 > 0x3eu)
    {
        edx = t2;
        goto L_100cfb6a;
    }
    eax = t1;
    edx = t2;
    t3 = rd32(COW_IMG(0x100cfbc0u) + rd8(COW_IMG(0x100cfbd0u) + eax) * 4u);
    switch (t3 - RD)
    {
    case 0x100cfb5fu: goto L_100cfb5f;
    case 0x100cfb63u: goto L_100cfb63;
    case 0x100cfb6au: goto L_100cfb6a;
    case 0x100cfb90u: goto L_100cfb90;
    default: rt_fatal(g, COW_IMG(0x100cfb58u), "switch");
    }
    return 0;
L_100cfb5f: ;
    edi = 0u;
L_100cfb95: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x1002b5a0u), self + 0x674u, 0);
    t13 = g->edx;
    if (rd32(t12) == 0u) goto L_100cfbbb;
    eax = rd32(t12);
    edx = t13;
    g->esp = sp0 - 8u;
    t14 = cow_thiscall(g, COW_IMG(0x10035250u), eax + 8u, 0);
    if (t14 == 0u) goto L_100cfbbb;
    eax = t14;
    return eax + edi * 0x18u;
L_100cfb63: ;
    edi = 2u;
    goto L_100cfb95;
L_100cfb6a: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10084350u), self, 1, t4);
    t7 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        edx = t7;
        goto L_100cfb90;
    }
    edx = t7;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10084390u), self, 0);
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, COW_IMG(0x10084370u), self, 1, t8);
    t11 = g->edx;
    if ((uint8_t)t10 == 0u)
    {
        edx = t11;
        edi = 0u;
        goto L_100cfb95;
    }
    edx = t11;
L_100cfb90: ;
    edi = 1u;
    goto L_100cfb95;
L_100cfbbb: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100cfb40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100cfb40(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

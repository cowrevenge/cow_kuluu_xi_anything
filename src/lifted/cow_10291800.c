/* f_0x10291800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10291800(Guest* g)
{
    uint32_t eax;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(arg1 + 0x90u) != 0u)
    {
        eax = rd32(arg1 + 0x90u);
        goto L_1029185a;
    }
    if ((int32_t)rd32(arg1 + 0x84u) > 0)
    {
        eax = rd32(arg1 + 0x84u);
        t1 = eax * 4u + rd32(arg2);
        wr32(arg2, t1);
    }
    if ((int32_t)rd32(arg1 + 0x88u) > 0)
    {
        eax = rd32(arg1 + 0x88u);
        t2 = eax * 4u + rd32(arg2);
        wr32(arg2, t2);
    }
    if ((int32_t)rd32(arg1 + 0x8cu) <= 0) goto L_10291911;
    esi = rd32(arg1 + 0x8cu);
    t3 = esi * 4u + rd32(arg2);
    wr32(arg2, t3);
    return;
L_1029185a: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1027ebf0u), 1, arg1 + 0x1cu);
    if ((int32_t)rd32(arg1 + 0x84u) > 0)
    {
        wr32(arg1 + 0x5cu, rd32(rd32(arg2)));
        t4 = rd32(arg2) + 4u;
        wr32(arg2, t4);
        wr32(arg1 + 0x60u, rd32(t4));
        t5 = rd32(arg2) + 4u;
        wr32(arg2, t5);
        wr32(arg1 + 0x64u, rd32(t5));
        t6 = rd32(arg2) + 4u;
        wr32(arg2, t6);
    }
    if ((int32_t)rd32(arg1 + 0x88u) > 0)
    {
        wr32(arg1 + 0x68u, rd32(rd32(arg2)));
        t7 = rd32(arg2) + 4u;
        wr32(arg2, t7);
        wr32(arg1 + 0x6cu, rd32(t7));
        t8 = rd32(arg2) + 4u;
        wr32(arg2, t8);
        wr32(arg1 + 0x70u, rd32(t8));
        t9 = rd32(arg2) + 4u;
        wr32(arg2, t9);
        wr32(arg1 + 0x74u, rd32(t9));
        t10 = rd32(arg2) + 4u;
        wr32(arg2, t10);
    }
    if ((int32_t)rd32(arg1 + 0x8cu) > 0)
    {
        wr32(arg1 + 0x78u, rd32(rd32(arg2)));
        t11 = rd32(arg2) + 4u;
        wr32(arg2, t11);
        wr32(arg1 + 0x7cu, rd32(t11));
        t12 = rd32(arg2) + 4u;
        wr32(arg2, t12);
        wr32(arg1 + 0x80u, rd32(t12));
        t13 = rd32(arg2) + 4u;
        wr32(arg2, t13);
    }
L_10291911: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10291800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10291800(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

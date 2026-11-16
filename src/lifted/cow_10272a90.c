/* f_0x10272a90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10272a90(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(sp0 + 8u);
    wr32(sp0 + 8u, COW_IMG(0x1099b13cu));
    if (t1 == 0u) goto L_10272aa5;
    t2 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_cdecl(g, COW_IMG(0x10277a70u), 1, t2);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        edx = t5;
        edi = t2;
        goto L_10278ce1;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 + 8u, COW_IMG(0x103b3bd4u));
    wr32(sp0 + 4u, COW_IMG(0x103b3ae4u));
    g->esp = sp0;
    g->edx = t8;
    return cow_tailcall(g, COW_IMG(0x102858b0u), t6, t7, t8);
L_10272aa5: ;
    t13 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t14 = cow_cdecl(g, COW_IMG(0x10277a70u), 1, t13);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 != 0u)
    {
        edx = t16;
        edi = t13;
        goto L_10278df1;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t17 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b37ecu));
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 + 8u, COW_IMG(0x103b3bfcu));
    wr32(sp0 + 4u, COW_IMG(0x103b3ae4u));
    g->esp = sp0;
    g->edx = t19;
    return cow_tailcall(g, COW_IMG(0x102858b0u), t17, t18, t19);
L_10278ce1: ;
    if ((int32_t)rd32(edi + 0xa4u) <= 0)
    {
        eax = rd32(edi + 0xa4u);
    }
    else
    {
        ebp = rd32(sp0 + 8u);
        esi = 0u;
L_10278cf2: ;
        t9 = rd32(esi * 4u + rd32(edi + 0x9cu));
        g->edx = edx;
        t10 = rd32(edi + 0x9cu);
        g->esp = sp0 - 8u;
        t11 = cow_cdecl(g, COW_IMG(0x1028f450u), 3, ebp, t9, in_ebp);
        t12 = g->edx;
        wr8(t11 + 0x1du, 0xffu);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0xa4u))
        {
            edx = t12;
            esi = esi + 1u;
            goto L_10278cf2;
        }
        eax = rd32(edi + 0xa4u);
        edx = t12;
    }
    g->edx = edx;
    return eax;
L_10278df1: ;
    if ((int32_t)rd32(edi + 0xa4u) <= 0)
    {
        eax = rd32(edi + 0xa4u);
    }
    else
    {
        ebp = rd32(sp0 + 8u);
        esi = 0u;
L_10278e02: ;
        t20 = rd32(esi * 4u + rd32(edi + 0x9cu));
        g->edx = edx;
        t21 = rd32(edi + 0x9cu);
        g->esp = sp0 - 8u;
        t22 = cow_cdecl(g, COW_IMG(0x1028f450u), 3, ebp, t20, in_ebp);
        t23 = g->edx;
        wr8(t22 + 0x1du, 0u);
        if ((int32_t)(esi + 1u) < (int32_t)rd32(edi + 0xa4u))
        {
            edx = t23;
            esi = esi + 1u;
            goto L_10278e02;
        }
        eax = rd32(edi + 0xa4u);
        edx = t23;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10272a90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10272a90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

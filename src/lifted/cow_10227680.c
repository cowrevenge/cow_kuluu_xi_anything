/* f_0x10227680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10227680(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t edx;
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
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_102276a4;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_1022769d;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_102276a7;
    }
L_1022769d: ;
    eax = 1u;
L_102276ad: ;
    t1 = rd32(COW_IMG(0x10227734u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102276b4u: goto L_102276b4;
    case 0x102276d0u: goto L_102276d0;
    case 0x102276ecu: goto L_102276ec;
    case 0x10227708u: goto L_10227708;
    default: rt_fatal(g, COW_IMG(0x102276adu), "switch");
    }
    return;
L_102276a4: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_102276a7: ;
    if (!cf && !zf) goto L_1022772d;
    goto L_102276ad;
L_102276b4: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg2, 0u);
    t14 = g->edx;
    g->edx = t14;
    cow_thiscall(g, COW_IMG(0x10258cc0u), arg1, 1, t13);
    t15 = g->edx;
    g->edx = t15;
    return;
L_102276d0: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg2, 1u);
    t11 = g->edx;
    g->edx = t11;
    cow_thiscall(g, COW_IMG(0x10258990u), arg1, 1, t10);
    t12 = g->edx;
    g->edx = t12;
    return;
L_102276ec: ;
    g->edx = arg2;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg2, 2u);
    t8 = g->edx;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x10258810u), arg1, 1, t7);
    t9 = g->edx;
    g->edx = t9;
    return;
L_10227708: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg2, 4u);
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg2, 3u);
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10258b80u), arg1, 2, t4, t2);
    t6 = g->edx;
    edx = t6;
L_1022772d: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227680(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10227680(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

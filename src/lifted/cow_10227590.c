/* f_0x10227590 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10227590(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
        goto L_102275b5;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (in_edx & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_102275ae;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_102275b8;
    }
L_102275ae: ;
    eax = 1u;
L_102275be: ;
    t1 = rd32(COW_IMG(0x10227664u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102275c5u: goto L_102275c5;
    case 0x102275e2u: goto L_102275e2;
    case 0x10227603u: goto L_10227603;
    case 0x1022762du: goto L_1022762d;
    default: rt_fatal(g, COW_IMG(0x102275beu), "switch");
    }
    return;
L_102275b5: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_102275b8: ;
    if (!cf && !zf) goto L_1022765f;
    goto L_102275be;
L_102275c5: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg2, 0u);
    t18 = g->edx;
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x10258c40u), arg1, 1, t17);
    t19 = g->edx;
    g->edx = t19;
    return;
L_102275e2: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg2, 0u);
    t15 = g->edx;
    g->edx = t15;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102588c0u), arg1, 3, 2u, t14, 0xffffffffu);
    t16 = g->edx;
    g->edx = t16;
    return;
L_10227603: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg2, 1u);
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0xcu;
    t11 = cow_thiscall(g, COW_IMG(0x10257940u), self, 2, arg2, 0u);
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102586d0u), arg1, 3, 3u, t11, t9);
    t13 = g->edx;
    g->edx = t13;
    return;
L_1022762d: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg2, 2u);
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10257940u), self, 2, arg2, 1u);
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x10257940u), self, 2, arg2, 0u);
    t7 = g->edx;
    g->edx = t7;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10258a80u), arg1, 5, 2u, 0u, t6, t4, t2);
    t8 = g->edx;
    edx = t8;
L_1022765f: ;
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227590(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10227590(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

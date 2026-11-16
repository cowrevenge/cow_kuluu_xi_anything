/* f_0x101adc30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101adc30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg2 - 2u > 0xdu) goto L_101add7c;
    t1 = rd32(COW_IMG(0x101add80u) + arg2 * 4u - 8u);
    switch (t1 - RD)
    {
    case 0x101adc47u: goto L_101adc47;
    case 0x101adc5fu: goto L_101adc5f;
    case 0x101adc77u: goto L_101adc77;
    case 0x101adc8fu: goto L_101adc8f;
    case 0x101adca7u: goto L_101adca7;
    case 0x101adcbfu: goto L_101adcbf;
    case 0x101adcd7u: goto L_101adcd7;
    case 0x101adcefu: goto L_101adcef;
    case 0x101add07u: goto L_101add07;
    case 0x101add1fu: goto L_101add1f;
    case 0x101add37u: goto L_101add37;
    case 0x101add4fu: goto L_101add4f;
    case 0x101add67u: goto L_101add67;
    case 0x101add7cu: goto L_101add7c;
    default: rt_fatal(g, COW_IMG(0x101adc40u), "switch");
    }
    return;
L_101adc47: ;
    eax = COW_IMG(0x1037ad24u);
    ecx = self;
L_101adc52: ;
    t14 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037ad24u), (uint8_t)t14);
    if ((uint8_t)t14 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t14;
        goto L_101adc52;
    }
    return;
L_101adc5f: ;
    eax = COW_IMG(0x1037ad98u);
    ecx = self;
L_101adc6a: ;
    t13 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037ad98u), (uint8_t)t13);
    if ((uint8_t)t13 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t13;
        goto L_101adc6a;
    }
    return;
L_101adc77: ;
    eax = COW_IMG(0x1037ad2cu);
    ecx = self;
L_101adc82: ;
    t12 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037ad2cu), (uint8_t)t12);
    if ((uint8_t)t12 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t12;
        goto L_101adc82;
    }
    return;
L_101adc8f: ;
    eax = COW_IMG(0x1037ada4u);
    ecx = self;
L_101adc9a: ;
    t11 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037ada4u), (uint8_t)t11);
    if ((uint8_t)t11 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t11;
        goto L_101adc9a;
    }
    return;
L_101adca7: ;
    eax = COW_IMG(0x1037ad84u);
    ecx = self;
L_101adcb2: ;
    t10 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037ad84u), (uint8_t)t10);
    if ((uint8_t)t10 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t10;
        goto L_101adcb2;
    }
    return;
L_101adcbf: ;
    eax = COW_IMG(0x1037ad70u);
    ecx = self;
L_101adcca: ;
    t9 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037ad70u), (uint8_t)t9);
    if ((uint8_t)t9 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t9;
        goto L_101adcca;
    }
    return;
L_101adcd7: ;
    eax = COW_IMG(0x1037ad60u);
    ecx = self;
L_101adce2: ;
    t8 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037ad60u), (uint8_t)t8);
    if ((uint8_t)t8 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t8;
        goto L_101adce2;
    }
    return;
L_101adcef: ;
    eax = COW_IMG(0x1037ad50u);
    ecx = self;
L_101adcfa: ;
    t7 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037ad50u), (uint8_t)t7);
    if ((uint8_t)t7 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t7;
        goto L_101adcfa;
    }
    return;
L_101add07: ;
    eax = COW_IMG(0x1037ad3cu);
    ecx = self;
L_101add12: ;
    t6 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037ad3cu), (uint8_t)t6);
    if ((uint8_t)t6 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t6;
        goto L_101add12;
    }
    return;
L_101add1f: ;
    eax = COW_IMG(0x1037add4u);
    ecx = self;
L_101add2a: ;
    t5 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037add4u), (uint8_t)t5);
    if ((uint8_t)t5 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t5;
        goto L_101add2a;
    }
    return;
L_101add37: ;
    eax = COW_IMG(0x1037adc8u);
    ecx = self;
L_101add42: ;
    t4 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037adc8u), (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t4;
        goto L_101add42;
    }
    return;
L_101add4f: ;
    eax = COW_IMG(0x1037adc0u);
    ecx = self;
L_101add5a: ;
    t3 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037adc0u), (uint8_t)t3);
    if ((uint8_t)t3 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t3;
        goto L_101add5a;
    }
    return;
L_101add67: ;
    eax = COW_IMG(0x1037adb4u);
    ecx = self;
L_101add72: ;
    t2 = rd8(eax);
    wr8(arg1 + eax - COW_IMG(0x1037adb4u), (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t2;
        goto L_101add72;
    }
L_101add7c: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101adc30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101adc30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

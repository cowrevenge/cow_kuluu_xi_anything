/* f_0x102059a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_102059a0(Guest* g)
{
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
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

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 6u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_10205a3c;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x10205a40u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102059b6u: goto L_102059b6;
    case 0x102059cau: goto L_102059ca;
    case 0x102059deu: goto L_102059de;
    case 0x102059f4u: goto L_102059f4;
    case 0x10205a10u: goto L_10205a10;
    case 0x10205a21u: goto L_10205a21;
    case 0x10205a29u: goto L_10205a29;
    default: rt_fatal(g, COW_IMG(0x102059afu), "switch");
    }
    return 0;
L_102059b6: ;
    t19 = (eax & 0xffffff00u) | rd8(self + 0x2cu) == 0u;
    g->eax = t19;
    g->edx = (in_edx & 0xffffff00u) | rd8(self + 0x2cu);
    t20 = rd8(self + 0x2cu);
    g->esp = sp0;
    t21 = cow_cdecl(g, COW_IMG(0x10204c30u), 1, t19);
    t22 = g->edx;
    g->edx = t22;
    return t21;
L_102059ca: ;
    t15 = (self & 0xffffff00u) | rd8(self + 0x2du) == 0u;
    g->eax = (eax & 0xffffff00u) | rd8(self + 0x2du);
    g->edx = in_edx;
    t16 = rd8(self + 0x2du);
    g->esp = sp0;
    t17 = cow_cdecl(g, COW_IMG(0x10204c40u), 1, t15);
    t18 = g->edx;
    g->edx = t18;
    return t17;
L_102059de: ;
    if (rd32(self + 0x18u) != 1u) goto L_102059ec;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t11 = cow_stdcall(g, COW_IMG(0x10204f70u), 0);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_102059ec: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t13 = cow_stdcall(g, COW_IMG(0x10204c60u), 0);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_102059f4: ;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x1025b5c0u), 1, 7u);
    t8 = g->edx;
    g->edx = t8;
    g->esp = sp0;
    t9 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, t7, 1u, 0u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10205a10: ;
    t6 = (in_edx & 0xffffff00u) | rd8(self + 0x2fu) == 0u;
    wr32(sp0 + 4u, t6);
    g->esp = sp0;
    g->edx = t6;
    return cow_tailcall(g, COW_IMG(0x10204ee0u), eax, self, t6);
L_10205a21: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_stdcall(g, COW_IMG(0x10204ed0u), 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10205a29: ;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x10385400u), 1u, 0u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10205a3c: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102059a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102059a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

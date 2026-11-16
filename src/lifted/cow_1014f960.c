/* f_0x1014f960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014f960(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
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

    if (rd32(self + 0x28u) > 0xau)
    {
        eax = rd32(self + 0x28u);
        goto L_1014f9e1;
    }
    eax = rd32(self + 0x28u);
    t1 = rd32(COW_IMG(0x1014f9e4u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x1014f972u: goto L_1014f972;
    case 0x1014f97au: goto L_1014f97a;
    case 0x1014f98bu: goto L_1014f98b;
    case 0x1014f992u: edx = in_edx; goto L_1014f992;
    case 0x1014f99au: goto L_1014f99a;
    case 0x1014f9a2u: goto L_1014f9a2;
    case 0x1014f9b1u: goto L_1014f9b1;
    case 0x1014f9c2u: goto L_1014f9c2;
    case 0x1014f9cau: goto L_1014f9ca;
    case 0x1014f9d9u: goto L_1014f9d9;
    default: rt_fatal(g, COW_IMG(0x1014f96bu), "switch");
    }
    return 0;
L_1014f972: ;
    t12 = (uint32_t)(int16_t)(rd16(self + 0x16u) + 8u);
    t13 = (uint32_t)(int16_t)(rd16(self + 0x14u) + 5u);
    g->edx = (in_edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x14u) + 5u);
    t14 = rd32(self + 0x38u);
    t15 = rd16(self + 0x14u);
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), t14, 5, t13, t12, 0x80808080u, 0u, 0u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((int32_t)rd32(self + 0x1cu) < 1)
    {
        eax = rd32(self + 0x1cu);
        edx = t17;
    }
    else
    {
        eax = rd32(self + 0x1cu);
        ecx = t16;
        edx = t17;
        if ((int32_t)eax < 9)
        {
            t18 = (uint32_t)(int16_t)(rd16(self + 0x16u) + 0x1au);
            t19 = (uint32_t)(int16_t)(rd16(self + 0x14u) + 0xfu);
            g->eax = eax;
            g->edx = t19;
            g->esp = sp0 - 4u;
            t20 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(eax * 4u + self + 0x38u), 5, t19, t18, 0x80808080u, 0u, 0u);
            t21 = g->edx;
            eax = t20;
            edx = t21;
        }
    }
    g->edx = edx;
    return eax;
L_1014f97a: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t10 = cow_thiscall(g, COW_IMG(0x1014fa80u), self, 1, 0u);
    t11 = g->edx;
    g->esp = sp0;
    g->edx = t11;
    return cow_tailcall(g, COW_IMG(0x1014fc20u), t10, self, t11);
L_1014f98b: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t8 = cow_thiscall(g, COW_IMG(0x1014fb90u), self, 0);
    t9 = g->edx;
    eax = t8;
    edx = t9;
L_1014f992: ;
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x1014fc20u), eax, self, edx);
L_1014f99a: ;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1014fb10u), eax, self, in_edx);
L_1014f9a2: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x1014fc20u), self, 0);
    t7 = g->edx;
    g->esp = sp0;
    g->edx = t7;
    return cow_tailcall(g, COW_IMG(0x1014fc90u), t6, self, t7);
L_1014f9b1: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x1014fa80u), self, 1, 0x12u);
    t5 = g->edx;
    g->esp = sp0;
    g->edx = t5;
    return cow_tailcall(g, COW_IMG(0x1014fc90u), t4, self, t5);
L_1014f9c2: ;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1014fd40u), eax, self, in_edx);
L_1014f9ca: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x1014fc20u), self, 0);
    t3 = g->edx;
    g->esp = sp0;
    g->edx = t3;
    return cow_tailcall(g, COW_IMG(0x1014fe20u), t2, self, t3);
L_1014f9d9: ;
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1014feb0u), eax, self, in_edx);
L_1014f9e1: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014f960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014f960(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

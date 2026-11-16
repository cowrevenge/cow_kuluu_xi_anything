/* f_0x101f8ea0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101f8ea0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;

    if (rd8(sp0 + 4u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 4u);
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | rd8(sp0 + 4u);
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
        t2 = g->edx;
        wr16(self + 0x674u, 0x9fu);
        wr8(self + 0x676u, 2u);
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
        }
        else
        {
            eax = t1;
            g->eax = eax;
            g->edx = rd32(eax);
            t3 = rd32(eax);
            g->esp = sp0 - 0xcu;
            t4 = cow_thiscall(g, rd32(t3 + 0x1c0u), eax, 0);
            t5 = g->edx;
            t6 = rd32(t4 + 4u);
            wr32(self + 0x688u, t6);
            eax = t6;
            edx = t5;
        }
        t7 = rd32(self + 0xfcu);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x101f8fb0u), 3, t7, self + 0x67au, self + 0x67cu);
        t8 = (uint32_t)(int16_t)rd16(self + 0x67au) - (uint32_t)(int16_t)rd16(self + 0x1cu);
        t9 = rd16(self + 0x1eu);
        t10 = rd16(self + 0x67au);
        t11 = rd16(self + 0x67cu);
        wr32(sp0 + 4u, t8);
        wr16(self + 0x22u, (uint16_t)t11);
        t12 = rd32(sp0 + 4u);
        wrf32(self + 0x24u, (float)(double)(int32_t)t12);
        wr16(self + 0x20u, (uint16_t)t10);
        t13 = (uint32_t)(int16_t)t11 - (uint32_t)(int16_t)t9;
        wr32(sp0 + 4u, t13);
        t14 = rd32(sp0 + 4u);
        wrf32(self + 0x28u, (float)(double)(int32_t)t14);
        ecx = (uint32_t)(int16_t)t9;
        edx = t13;
    }
    g->esp = sp0 - 0xcu;
    t15 = cow_thiscall(g, COW_IMG(0x100f94d0u), ecx, 0);
    if ((uint8_t)ebx == 0u)
    {
        eax = t15;
        goto L_101f8f91;
    }
    eax = t15;
    if (eax == 0u) goto L_101f8f91;
    if (rd32(eax) != 1u) goto L_101f8f91;
    wr16(self + 0x694u, 0x99u);
    wr8(self + 0x696u, 0xbu);
    wr8(self + 0x699u, 0x80u);
    t16 = rd32(eax + 0xcu);
    t17 = rd32(eax + 4u);
    t18 = rd32(self + 0xfcu);
    g->eax = self + 0x69cu;
    g->esp = sp0 - 0x14u;
    t19 = cow_cdecl(g, COW_IMG(0x101f7570u), 3, t18, self + 0x69au, self + 0x69cu);
    eax = (t19 & 0xffffff00u) | 2u;
L_101f8f95: ;
    wr8(self + 0xa0u, (uint8_t)eax);
    wr32(self + 0x98u, self + 0x674u);
    return;
L_101f8f91: ;
    eax = (eax & 0xffffff00u) | 1u;
    goto L_101f8f95;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f8ea0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101f8ea0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* f_0x101cf660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101cf660(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    int64_t q5;
    int64_t q6;
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
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;

    if ((int32_t)rd32(sp0 + 4u) >= 0)
    {
        ecx = rd32(sp0 + 4u);
        if ((int32_t)ecx <= 100) goto L_101cf6c7;
        ecx = 0x64u;
L_101cf689: ;
        ebp = -(ecx * 2u) + 0xc8u;
    }
    else
    {
        t1 = cow_divs(g, 0x1388u, 1u);
        t2 = cow_mods(g, 0x1388u, 1u);
        ebp = t1;
    }
L_101cf692: ;
    wr32(sp0 + 4u, self + 0x65cu);
    ecx = self + 0x65cu;
    edi = 0u;
L_101cf6a5: ;
    q5 = (uint64_t)cow_mulu(0x51eb851fu, rd32(COW_IMG(0x1037e430u) + edi) * ebp + 0x32u);
    if ((int32_t)(cow_qhi(q5) >> 5u) >= 1)
    {
        edx = cow_qhi(q5) >> 5u;
        if ((int32_t)edx > 255)
        {
            edx = 0xffu;
        }
    }
    else
    {
        edx = 1u;
    }
    wr8(ecx - 0x40u, (uint8_t)edx);
    q6 = (uint64_t)cow_mulu(0x51eb851fu, rd32(COW_IMG(0x1037e530u) + edi) * ebp + 0x32u);
    if ((int32_t)(cow_qhi(q6) >> 5u) >= 1)
    {
        edx = cow_qhi(q6) >> 5u;
        if ((int32_t)edx > 255)
        {
            edx = 0xffu;
        }
    }
    else
    {
        edx = 1u;
    }
    wr8(ecx, (uint8_t)edx);
    if ((int32_t)(ecx - self - 0x65bu) < 64)
    {
        ecx = ecx + 1u;
        edi = edi + 4u;
        goto L_101cf6a5;
    }
    eax = ecx - self - 0x65bu;
    g->ebx = 0xfffff9a4u - self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x101d0a40u), rd32(self + 8u), 1, 0xdbu);
    t8 = g->edx;
    g->ebx = 0xfffff9a4u - self;
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x101d0a20u), rd32(self + 8u), 1, 0x43u);
    t10 = g->edx;
    g->ebx = 0xfffff9a4u - self;
    t11 = cow_thiscall(g, COW_IMG(0x101d09c0u), rd32(self + 8u), 1, 0u);
    eax = t11;
    edi = COW_IMG(0x1037e330u);
L_101cf74b: ;
    t12 = rd8(self + rd32(edi) + 0x61cu);
    g->ebx = 0xfffff9a4u - self;
    g->eax = eax;
    g->edx = t12;
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x101d09c0u), rd32(self + 8u), 1, t12);
    t14 = g->edx;
    if ((int32_t)(edi + 4u) < (int32_t)COW_IMG(0x1037e430u))
    {
        eax = t13;
        edi = edi + 4u;
        goto L_101cf74b;
    }
    eax = t13;
    edx = t14;
    g->ebx = 0xfffff9a4u - self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_thiscall(g, COW_IMG(0x101d0a40u), rd32(self + 8u), 1, 0xdbu);
    t16 = g->edx;
    g->ebx = 0xfffff9a4u - self;
    g->edx = t16;
    t17 = cow_thiscall(g, COW_IMG(0x101d0a20u), rd32(self + 8u), 1, 0x43u);
    t18 = g->edx;
    g->ebx = 0xfffff9a4u - self;
    g->edx = t18;
    cow_thiscall(g, COW_IMG(0x101d09c0u), rd32(self + 8u), 1, 1u);
    t19 = g->edx;
    edx = t19;
    edi = COW_IMG(0x1037e330u);
L_101cf790: ;
    t20 = rd8(self + rd32(edi) + 0x65cu);
    g->ebx = 0xfffff9a4u - self;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101d09c0u), rd32(self + 8u), 1, t20);
    t21 = g->edx;
    if ((int32_t)(edi + 4u) < (int32_t)COW_IMG(0x1037e430u))
    {
        edx = t21;
        edi = edi + 4u;
        goto L_101cf790;
    }
    eax = self + 0x61cu;
    edi = COW_IMG(0x1037e630u);
L_101cf7c1: ;
    wr8(eax, (uint8_t)(uint32_t)((int32_t)((uint32_t)(int16_t)rd16(edi) * rd8(eax) + 0x400u) >> 0xbu));
    if ((int32_t)(eax - self - 0x61bu) < 64)
    {
        eax = eax + 1u;
        edi = edi + 2u;
        goto L_101cf7c1;
    }
    eax = rd32(sp0 + 4u);
    esi = COW_IMG(0x1037e630u);
L_101cf7eb: ;
    wr8(eax, (uint8_t)(uint32_t)((int32_t)((uint32_t)(int16_t)rd16(esi) * rd8(eax) + 0x400u) >> 0xbu));
    if ((int32_t)(eax - self - 0x65bu) < 64)
    {
        eax = eax + 1u;
        esi = esi + 2u;
        goto L_101cf7eb;
    }
    g->ebx = in_ebx;
    return;
L_101cf6c7: ;
    if ((int32_t)ecx >= 50) goto L_101cf689;
    t3 = cow_divs(g, 0x1388u, ecx);
    t4 = cow_mods(g, 0x1388u, ecx);
    ebp = t3;
    goto L_101cf692;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cf660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cf660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* f_0x102545b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102545b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
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

    t1 = rd32(self + 0x24u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t1);
    t3 = g->edx;
    wr32(self + 0x24u, 0u);
    wr32(self + 0x28u, 0u);
    wr32(self + 0x2cu, 0u);
    t4 = rd32(self + 0x14u);
    g->ecx = t4;
    g->edx = t3;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t4);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(self + 0x14u, 0u);
    wr32(self + 0x18u, 0u);
    wr32(self + 0x1cu, 0u);
    if (rd32(self + 4u) == rd32(self + 8u))
    {
        ecx = t5;
        edx = t6;
        goto L_1025463e;
    }
    ecx = t5;
    edx = t6;
    ebp = rd32(self + 8u);
    esi = rd32(self + 4u);
L_102545e9: ;
    if (rd32(esi + 4u) != 0u)
    {
        eax = rd32(esi + 4u);
        g->esp = sp0 - 0x10u;
        t7 = cow_stdcall(g, COW_IMG(0x102555c0u), 1, eax);
        if (rd8(t7) == 0u)
        {
            eax = t7;
            goto L_1025461b;
        }
        t8 = rd32(esi + 4u);
        g->edx = t8;
        g->esp = sp0 - 0x10u;
        t9 = cow_stdcall(g, COW_IMG(0x102555c0u), 1, t8);
        t10 = g->edx;
        if (rd8(t9) == 0xffu)
        {
            eax = t9;
            goto L_1025461b;
        }
        edx = t10;
        t11 = rd32(esi + 4u);
        g->ecx = esi;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t12 = cow_stdcall(g, COW_IMG(0x102555c0u), 1, t11);
        t13 = g->ecx;
        t14 = g->edx;
        wr8(t12, (uint8_t)(rd8(t12) - 1u));
        ecx = t13;
        edx = t14;
    }
L_1025462e: ;
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 0u);
    wr32(esi + 0xcu, 0u);
    if (esi + 0x1cu != ebp)
    {
        esi = esi + 0x1cu;
        goto L_102545e9;
    }
L_1025463e: ;
    t19 = rd32(self + 4u);
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, t19);
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0xcu, 0u);
    return;
L_1025461b: ;
    t15 = rd32(esi + 0xcu) + 2u;
    t16 = rd32(esi + 4u) - 1u;
    g->ecx = esi;
    g->edx = t16;
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, COW_IMG(0x102555d0u), 2, t16, t15);
    t17 = g->ecx;
    t18 = g->edx;
    ecx = t17;
    edx = t18;
    goto L_1025462e;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102545b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102545b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

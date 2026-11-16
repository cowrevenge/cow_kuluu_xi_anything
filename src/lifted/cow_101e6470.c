/* f_0x101e6470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e6470(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, in_esi);
    if (rd16(sp0 + 4u) != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101e6503;
    }
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_101e64cb;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_101e64f4;
    }
    t1 = rd32(COW_IMG(0x10663520u));
    wr8(sp0 + 4u, 0u);
    if (t1 == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_101e64f4;
    }
    ecx = t1;
    wr32(sp0 - 8u, sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x101e3510u), ecx, 1, sp0 + 4u);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_101e64f4;
    }
    eax = t2;
    t4 = rd32(sp0 + 4u);
    wr32(sp0 - 8u, t4);
    t5 = (uint32_t)(int16_t)rd16(self + 0x16u);
    wr32(sp0 - 0xcu, t5);
    g->eax = eax;
    g->edx = t5;
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x101e5d60u), 2, t5, t4);
    t7 = g->edx;
    wr32(sp0 - 8u, COW_IMG(0x1037f36cu));
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f36cu));
    t9 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edx = t9;
    return t8;
L_101e64cb: ;
    t10 = rd32(COW_IMG(0x10663520u));
    wr8(sp0 + 4u, 0u);
    if (t10 == 0u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
    }
    else
    {
        ecx = t10;
        wr32(sp0 - 8u, sp0 + 4u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, COW_IMG(0x101e3510u), ecx, 1, sp0 + 4u);
        t12 = g->edx;
        if ((uint8_t)t11 == 0u)
        {
            eax = t11;
            edx = t12;
        }
        else
        {
            eax = t11;
            edx = t12;
            t13 = rd32(sp0 + 4u);
            wr32(sp0 - 8u, t13);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t14 = cow_thiscall(g, COW_IMG(0x101e5c50u), self, 1, t13);
            t15 = g->edx;
            eax = t14;
            edx = t15;
        }
    }
L_101e64f4: ;
    wr32(sp0 - 8u, COW_IMG(0x1037f36cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t16 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1037f36cu));
    t17 = g->edx;
    eax = t16;
    edx = t17;
L_101e6503: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e6470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e6470(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */

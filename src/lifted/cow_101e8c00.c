/* f_0x101e8c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e8c00(Guest* g)
{
    uint32_t ebx;
    uint32_t edi;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
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

    t1 = rd32(self + 0x160u);
    t2 = rd32(sp0 + 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x101e8030u), 0);
    t3 = g->edx;
    if ((int32_t)t2 < 0) goto L_101e8d17;
    edx = t3;
    ebx = t2;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x101e6d80u), self, 1, ebx);
    t5 = g->edx;
    wr32(self + 0x170u, t4);
    if (t4 != 0xffffffffu)
    {
        edx = t5;
    }
    else
    {
        edx = t5;
        t6 = (uint32_t)(int16_t)rd16(self + 0x16au);
        wr32(self + 0x170u, t6);
    }
    if ((int32_t)rd32(self + 0x170u) <= 0)
    {
        zf = rd32(self + 0x170u) == 0u;
        goto L_101e8c9b;
    }
    edi = rd32(self + 0x170u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t7 = cow_thiscall(g, COW_IMG(0x101e6ce0u), self, 1, edi);
    t8 = g->edx;
    t9 = cow_thiscall(g, COW_IMG(0x101e6eb0u), self, 1, edi);
    t10 = rd16(t7 + 8u);
    t11 = rd16(t7 + 6u);
    t12 = rd16(self + 0x1cu);
    wr16(self + 0x22u, (uint16_t)t10);
    t13 = (uint32_t)(int16_t)t11 - (uint32_t)(int16_t)t12;
    t14 = rd16(self + 0x1eu);
    wr32(sp0 + 4u, t13);
    wr16(self + 0x20u, (uint16_t)t11);
    t15 = rd32(sp0 + 4u);
    wrf32(self + 0x24u, (float)(double)(int32_t)t15);
    t16 = (uint32_t)(int16_t)t10 - (uint32_t)(int16_t)t14;
    wr32(sp0 + 4u, t16);
    t17 = rd32(sp0 + 4u);
    wrf32(self + 0x28u, (float)(double)(int32_t)t17);
    return;
L_101e8c9b: ;
    if (!zf) goto L_101e8ce6;
    g->esp = sp0 - 0xcu;
    t18 = cow_thiscall(g, COW_IMG(0x101e6d30u), self, 1, ebx);
    t19 = g->ecx;
    wr8(t18, rd8(t18) | 1u);
    t20 = rd16(t18 + 6u);
    t21 = rd16(t18 + 8u);
    wr16(self + 0x22u, (uint16_t)t21);
    t22 = rd16(self + 0x1cu);
    wr16(self + 0x20u, (uint16_t)t20);
    t23 = (uint32_t)(int16_t)t20 - (uint32_t)(int16_t)t22;
    t24 = rd16(self + 0x1eu);
    wr32(sp0 + 4u, t23);
    t25 = rd32(sp0 + 4u);
    wrf32(self + 0x24u, (float)(double)(int32_t)t25);
    t26 = (uint32_t)(int16_t)t21 - (uint32_t)(int16_t)t24;
    wr32(sp0 + 4u, t26);
    t27 = rd32(sp0 + 4u);
    wrf32(self + 0x28u, (float)(double)(int32_t)t27);
    return;
L_101e8ce6: ;
    t28 = rd16(self + 0x1cu);
    wr16(self + 0x20u, 0x100u);
    wr16(self + 0x22u, 0x100u);
    t29 = 0x100u - (uint32_t)(int16_t)t28;
    t30 = rd16(self + 0x1eu);
    wr32(sp0 + 4u, t29);
    t31 = 0x100u - (uint32_t)(int16_t)t30;
    t32 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t31);
    wrf32(self + 0x24u, (float)(double)(int32_t)t32);
    t33 = rd32(sp0 + 4u);
    wrf32(self + 0x28u, (float)(double)(int32_t)t33);
L_101e8d17: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e8c00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e8c00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

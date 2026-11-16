/* f_0x1014cda0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1014cda0(Guest* g)
{
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_c;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint32_t)(int16_t)arg1 == 5u)
    {
        eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        goto L_1014cdc9;
    }
    eax = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
    if ((uint32_t)(int16_t)arg1 != 6u)
    {
        edx = in_edx;
        goto L_1014ce72;
    }
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100f7fa0u), 1, 0xfu);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_1014cdc9: ;
    if ((int32_t)eax <= 0) goto L_1014ce6d;
    if ((int32_t)eax > 8) goto L_1014ce6d;
    if (rd32(eax * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c9dcu) == 7u)
    {
        ecx = eax * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c9dcu;
        edx = rd32(COW_IMG(0x104dfd98u));
        goto L_1014ce00;
    }
    ecx = eax * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c9dcu;
    eax = rd32(eax * 0x48u + rd32(COW_IMG(0x104dfd98u)) + 0x2c9dcu) - 7u;
    edx = rd32(COW_IMG(0x104dfd98u));
    if (eax == 4u) goto L_1014ce00;
    eax = eax - 4u;
    if (eax != 2u)
    {
        eax = eax - 2u;
        goto L_1014ce72;
    }
L_1014ce00: ;
    if (rd32(COW_IMG(0x10578458u)) == 0u)
    {
        eax = rd32(COW_IMG(0x10578458u));
        goto L_1014ce72;
    }
    eax = rd32(COW_IMG(0x10578458u));
    if (rd32(eax + 8u) == 0u)
    {
        edx = rd32(eax + 8u);
        goto L_1014ce72;
    }
    edx = rd32(eax + 8u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x1014ca10u), 1, ecx);
    t4 = g->edx;
    if ((uint8_t)t3 == 0u)
    {
        eax = t3;
        edx = t4;
        ecx = rd32(rd32(COW_IMG(0x10578458u)) + 8u);
        loc_c = 0xbu;
    }
    else
    {
        edx = t4;
        eax = rd32(COW_IMG(0x10578458u));
        ecx = rd32(rd32(COW_IMG(0x10578458u)) + 8u);
        loc_c = 5u;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x10118b60u), ecx, 2, loc_c, 3u);
    g->edx = rd32(COW_IMG(0x10578458u));
    t6 = rd32(COW_IMG(0x10578458u));
    cow_call_regs(g, COW_IMG(0x10118db0u), t5, rd32(t6 + 8u), g->edx, 0, 2, 1u, 0u);
    t7 = g->edx;
    d8 = cow_take_float(g);
    d9 = cow_take_float(g);
    t10 = rd32(rd32(COW_IMG(0x10578458u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578458u));
    t11 = rd32(COW_IMG(0x10578458u));
    t12 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t7, 2, t10, 0u);
    t13 = g->edx;
    wr32(self + 0x14u, 7u);
    g->edx = t13;
    fpush(g, d8);
    fpush(g, d9);
    return t12;
L_1014ce6d: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t14 = cow_thiscall(g, COW_IMG(0x10037c50u), (uint32_t)(int16_t)arg1 - 5u, 0);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_1014ce72: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014cda0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014cda0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */

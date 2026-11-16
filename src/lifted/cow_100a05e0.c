/* f_0x100a05e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100a05e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0x5cu, 0u, 0u);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        goto L_100a065b;
    }
    eax = t1;
    edx = t2;
    esi = t1;
    wr16(esi + 0x1cu, rd16(COW_IMG(0x10482f1au)));
    t3 = rd32(COW_IMG(0x10480aa4u));
    wr32(esi + 0x10u, t3);
    t4 = rd16(COW_IMG(0x10485f7cu));
    wr16(esi + 0x18u, (uint16_t)t4);
    g->ecx = t3;
    g->edx = (edx & 0xffff0000u) | t4;
    t5 = rd16(COW_IMG(0x10482f1au));
    g->esp = sp0 - 4u;
    t6 = cow_stdcall(g, COW_IMG(0x100a0580u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    wr16(esi + 0x1au, (uint16_t)t6);
    wr8(esi + 0x1eu, 1u);
    g->ecx = t7;
    g->edx = t8;
    t9 = cow_stdcall(g, COW_IMG(0x100a0570u), 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(esi + 0x14u, t9);
    g->eax = arg4;
    t12 = cow_cdecl(g, COW_IMG(0x100dd970u), 1, arg4);
    wr8(esi + 0x1fu, (uint8_t)t12);
    wr32(esi + 4u, arg1);
    wr32(esi + 8u, arg3);
    wr32(esi + 0xcu, arg2);
    g->eax = arg2;
    g->esp = sp0 - 8u;
    t13 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, esi, 0x20u, 0u);
    return (t13 & 0xffffff00u) | 1u;
L_100a065b: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a05e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a05e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

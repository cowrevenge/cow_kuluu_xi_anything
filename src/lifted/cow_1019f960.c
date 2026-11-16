/* f_0x1019f960 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1019f960(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 308u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x101a0950u), rd32(self + 8u), 0);
    t2 = g->edx;
    if ((int32_t)t1 >= 0) goto L_1019f97a;
    eax = t1;
    edx = t2;
    g->edx = edx;
    return 0xffffffffu;
L_1019f97a: ;
    t3 = rd32(arg1 + 4u);
    wr32(sp0 - 0x12cu, t3);
    esi = arg1 + 8u;
    edi = sp0 - 0x128u;
    ecx = 0x40u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t4 = rd32(arg1 + 0x108u);
    wr32(sp0 - 0x28u, t4);
    t5 = rd32(arg1 + 0x10cu);
    wr32(sp0 - 0x24u, t5);
    t6 = rd32(arg1 + 0x110u);
    wr32(sp0 - 0x20u, t6);
    t7 = rd32(arg1 + 0x114u);
    wr32(sp0 - 0x1cu, t7);
    t8 = rd32(arg1 + 0x118u);
    wr32(sp0 - 0x18u, t8);
    t9 = rd32(arg1 + 0x11cu);
    wr32(sp0 - 0x14u, t9);
    t10 = rd32(arg1 + 0x120u);
    wr32(sp0 - 0x10u, t10);
    wr32(sp0 - 0x130u, COW_IMG(0x10337200u));
    g->edx = t10;
    g->esp = sp0 - 0x124u;
    t11 = cow_cdecl(g, COW_IMG(0x1019fd50u), 3, COW_IMG(0x10337200u), t3, rd32(sp0 - 0x128u));
    t12 = g->edx;
    if ((int32_t)t11 >= 0)
    {
        ecx = rd32(self + 8u);
        edx = t12;
        esi = t11;
        goto L_1019fa15;
    }
    ecx = rd32(self + 8u);
    edx = t12;
    g->esp = sp0 - 0xcu;
    t13 = cow_fastcall(g, COW_IMG(0x101a0970u), ecx, edx, 0);
    t14 = g->edx;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t14;
    return 0xffffffffu;
L_1019fa15: ;
    g->esp = sp0 - 0xcu;
    t15 = cow_fastcall(g, COW_IMG(0x101a0970u), ecx, edx, 0);
    t16 = g->edx;
    if ((int32_t)t15 >= 0)
    {
        edx = t16;
        goto L_1019fa27;
    }
    eax = t15;
    edx = t16;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return 0xffffffffu;
L_1019fa27: ;
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019f960(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019f960(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

/* f_0x10251520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10251520(Guest* g)
{
    uint32_t eax;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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

    if ((rd32(self + 4u) & 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10251539;
    }
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x1024db80u), 1, COW_IMG(0x10669158u));
    return;
L_10251539: ;
    if ((eax & 2u) == 0u) goto L_10251600;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10251aa0u), eax, self, in_edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10251564;
    }
    eax = t1;
    ecx = t2;
    t4 = rd32(self + 4u) & 0xfffffff9u;
    wr32(self + 4u, t4);
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    return;
L_10251564: ;
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1024cf70u), eax, ecx, edx, 1, 1, COW_IMG(0x10669158u));
    t5 = g->edx;
    if (rd32(self + 0xcu) != 0u)
    {
        edx = t5;
    }
    else
    {
        edx = t5;
        t6 = (rd32(COW_IMG(0x10669158u)) & 0xffffff00u) | (uint8_t)(rd32(COW_IMG(0x10669158u)) | 0x30u);
        wr32(COW_IMG(0x10669158u), t6);
    }
    t7 = rd32(self + 0x10u);
    t8 = rd32(self + 8u);
    g->eax = t7;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x102516d0u), self, 2, t8, t7);
    t10 = rd32(self + 0x14u);
    t11 = rd32(self + 4u) | 4u;
    wr32(self + 4u, t11);
    cow_fastcall(g, COW_IMG(0x10251740u), self, t10, 1, t10);
    t12 = g->edx;
    t13 = rd32(self + 0x18u);
    g->eax = t13;
    t14 = cow_fastcall(g, COW_IMG(0x10251770u), self, t12, 1, t13);
    t15 = g->edx;
    t16 = rd32(self + 0x1cu);
    cow_fastcall(g, COW_IMG(0x102517a0u), self, t15, 1, t16);
    t17 = rd32(self + 0x10u);
    t18 = rd32(self + 8u);
    g->eax = t18;
    g->edx = t17;
    t19 = cow_thiscall(g, COW_IMG(0x102516d0u), self, 2, t18, t17);
    t20 = g->edx;
    t21 = rd32(self + 0x20u);
    cow_fastcall(g, COW_IMG(0x102518b0u), self, t20, 1, t21);
    t22 = g->ecx;
    ecx = t22;
    esi = COW_IMG(0x10389894u);
L_102515dc: ;
    t23 = rd32(esi - 4u) >> 1u & 1u;
    g->ecx = ecx;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10250680u), 3, COW_IMG(0x10669158u), rd32(esi), t23);
    t24 = g->ecx;
    if ((int32_t)(esi + 8u) < (int32_t)COW_IMG(0x1038990cu))
    {
        ecx = t24;
        esi = esi + 8u;
        goto L_102515dc;
    }
L_10251600: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10251520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10251520(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

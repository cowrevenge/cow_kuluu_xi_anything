/* f_0x1026ef20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1026ef20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const double xin0 = ST(0);
    const double xin1 = ST(1);

    if ((int32_t)rd32(COW_IMG(0x1099aed8u)) < 0)
    {
        eax = rd32(COW_IMG(0x1099aed8u));
        ecx = rd32(COW_IMG(0x1099aed4u));
        goto L_1026efb2;
    }
    eax = rd32(COW_IMG(0x1099aed8u));
    ecx = rd32(COW_IMG(0x1099aed4u));
    ebx = rd32(COW_IMG(0x1099aed8u));
    if ((int32_t)eax >= (int32_t)ecx) goto L_1026efb2;
    t1 = eax * 0xc0u + rd32(COW_IMG(0x1099aedcu));
    g->ecx = t1;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x1027db00u), 1, t1);
    t2 = g->ecx;
    if (arg1 == 0xffffffffu)
    {
        esi = eax * 0xc0u;
        goto L_1026ef5d;
    }
    ecx = t2;
    esi = eax * 0xc0u;
    if (arg1 != 0xfffffffeu) goto L_1026ef67;
L_1026ef5d: ;
    t3 = rd32(COW_IMG(0x1099aedcu));
    wr32(esi + t3, rd32(esi + t3) | 0x40u);
    ecx = t3;
L_1026ef67: ;
    t4 = rd32(COW_IMG(0x1099aedcu));
    wr32(esi + t4 + 0x94u, arg1);
    t5 = esi + rd32(COW_IMG(0x1099aedcu));
    g->ecx = ecx;
    g->edx = t4;
    t6 = rd32(COW_IMG(0x1099aedcu));
    fpush(g, xin0);
    fpush(g, xin1);
    g->esp = sp0 - 0xcu;
    t7 = cow_cdecl(g, COW_IMG(0x1027dce0u), 2, t5, arg2);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 != 0u) goto L_1026efa2;
    eax = t7;
    ecx = t8;
    edx = t9;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b1b04u), arg2);
    g->top = (g->top + 2u) & 7u;
    return 0xffffffffu;
L_1026efa2: ;
    t11 = rd32(COW_IMG(0x1099aed8u)) + 1u;
    wr32(COW_IMG(0x1099aed8u), t11);
    g->top = (g->top + 2u) & 7u;
    return ebx;
L_1026efb2: ;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b1ac0u), ecx);
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026ef20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026ef20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

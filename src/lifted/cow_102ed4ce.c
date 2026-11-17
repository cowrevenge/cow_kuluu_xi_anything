/* f_0x102ed4ce - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ed4ce(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0x10u) == 0xcdu)
    {
        eax = rd32(arg1 + 0x10u);
        goto L_102ed4e4;
    }
    eax = rd32(arg1 + 0x10u);
    if (eax != 0xceu) goto L_102ed514;
L_102ed4e4: ;
    if (rd8(arg1 + 0x40u) != 0u) goto L_102ed514;
    if (rd32(arg1 + 0x78u) >= rd32(arg1 + 0x60u))
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        wr32(rd32(arg1) + 0x14u, 0x42u);
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        cow_thiscall_cdecl(g, rd32(rd32(arg1)), self, 1, arg1);
        t1 = g->edx;
        ecx = arg1;
        edx = t1;
    }
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(arg1 + 0x17cu) + 4u), ecx, 0);
    t2 = g->edx;
    wr32(arg1 + 0x10u, 0xd2u);
    edx = t2;
L_102ed541: ;
    ecx = arg1;
L_102ed552: ;
    if (rd8(rd32(arg1 + 0x18cu) + 0x11u) == 0u) goto L_102ed544;
    g->eax = rd32(arg1 + 0x14u);
    g->edx = edx;
    t5 = rd32(arg1 + 0x14u);
    g->esp = sp0 - 8u;
    t6 = cow_thiscall(g, rd32(t5 + 0x18u), ecx, 0);
    t7 = g->ecx;
    t8 = g->edx;
    g->esp = sp0;
    t9 = cow_call_regs(g, COW_IMG(0x102f68edu), g->eax, t7, t8, 1, 3, arg1, arg1, in_esi);
    t10 = g->edx;
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
L_102ed514: ;
    if (eax != 0xcfu) goto L_102ed524;
    wr32(arg1 + 0x10u, 0xd2u);
    ecx = self;
    edx = in_edx;
    goto L_102ed552;
L_102ed524: ;
    if (eax == 0xd2u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102ed552;
    }
    wr32(rd32(arg1) + 0x14u, 0x12u);
    t3 = rd32(arg1 + 0x10u);
    wr32(rd32(arg1) + 0x18u, t3);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(arg1)), t3, 0);
    t4 = g->edx;
    edx = t4;
    goto L_102ed541;
L_102ed544: ;
    g->eax = rd32(arg1 + 0x18cu);
    g->edx = edx;
    t11 = rd32(arg1 + 0x18cu);
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, rd32(t11), ecx, 0);
    t13 = g->edx;
    if (t12 == 0u)
    {
        eax = t12;
        edx = t13;
        goto L_102ed571;
    }
    ecx = arg1;
    edx = t13;
    goto L_102ed552;
L_102ed571: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed4ce(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ed4ce(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

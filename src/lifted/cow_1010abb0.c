/* f_0x1010abb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010abb0(Guest* g)
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    g->esp = sp0 - 0x3cu;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x30u, 0);
    edx = sp0 - 0x20u;
    edi = 0u;
L_1010abc7: ;
    if (rd32(edi * 4u + self) == 0u) goto L_1010abef;
    esi = rd32(edi * 4u + self);
    ecx = 0x1eu;
L_1010abd3: ;
    wr8(edx, esi >> (ecx - 6u & 0x1fu) & 0x3fu);
    if ((esi >> (ecx - 6u & 0x1fu) & 0x3fu) == 0u) goto L_1010abe9;
    eax = (esi >> (ecx - 6u & 0x1fu) & 0xffffff00u) | (esi >> (ecx - 6u & 0x1fu) & 0x3fu);
    ecx = ecx - 6u;
    wr8(edx, (uint8_t)((uint8_t)eax + 0x20u));
    if ((int32_t)ecx > 0)
    {
        edx = edx + 1u;
        goto L_1010abd3;
    }
    edx = edx + 1u;
L_1010abe9: ;
    if ((int32_t)(edi + 1u) < 3)
    {
        edi = edi + 1u;
        goto L_1010abc7;
    }
L_1010abef: ;
    wr32(sp0 - 0x40u, sp0 - 0x20u);
    wr8(edx, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    cow_call_regs(g, COW_IMG(0x101092c0u), sp0 - 0x20u, sp0 - 0x30u, g->edx, 0, 1, sp0 - 0x20u);
    t1 = g->edx;
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        edx = t1;
        wr32(sp0 - 0x40u, COW_IMG(0x10354054u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t3 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x30u, 1, COW_IMG(0x10354054u));
        t4 = g->edx;
        t5 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x28u, 0);
        eax = t5;
        edx = sp0 - 0x10u;
        edi = 0u;
L_1010ac33: ;
        if (rd32(edi * 4u + self + 0xcu) == 0u) goto L_1010ac5c;
        esi = rd32(edi * 4u + self + 0xcu);
        ecx = 0x1eu;
L_1010ac40: ;
        wr8(edx, esi >> (ecx - 6u & 0x1fu) & 0x3fu);
        if ((esi >> (ecx - 6u & 0x1fu) & 0x3fu) == 0u)
        {
            eax = (esi >> (ecx - 6u & 0x1fu) & 0xffffff00u) | (esi >> (ecx - 6u & 0x1fu) & 0x3fu);
            goto L_1010ac56;
        }
        eax = (esi >> (ecx - 6u & 0x1fu) & 0xffffff00u) | (esi >> (ecx - 6u & 0x1fu) & 0x3fu);
        ecx = ecx - 6u;
        wr8(edx, (uint8_t)((uint8_t)eax + 0x20u));
        if ((int32_t)ecx > 0)
        {
            edx = edx + 1u;
            goto L_1010ac40;
        }
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x20u);
        edx = edx + 1u;
L_1010ac56: ;
        if ((int32_t)(edi + 1u) < 3)
        {
            edi = edi + 1u;
            goto L_1010ac33;
        }
L_1010ac5c: ;
        wr8(edx, 0u);
        wr32(sp0 - 0x40u, sp0 - 0x10u);
        g->esp = sp0 - 0x3cu;
        t6 = cow_call_regs(g, COW_IMG(0x101092c0u), eax, sp0 - 0x28u, g->edx, 0, 1, sp0 - 0x10u);
        wr32(sp0 - 0x40u, sp0 - 0x28u);
        g->edx = sp0 - 0x28u;
        t7 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x20u, 1, sp0 - 0x28u);
        t8 = g->edx;
        g->edx = t8;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x28u, 0);
        t9 = g->edx;
        if (rd32(sp0 - 0x1cu) == 0u)
        {
            edx = t9;
            eax = 0u;
        }
        else
        {
            eax = rd32(sp0 - 0x1cu);
            edx = t9;
            eax = rd32(eax + 4u);
        }
        wr32(sp0 - 0x40u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        t10 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x30u, 1, eax);
        t11 = g->edx;
        g->edx = t11;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x20u, 0);
        t12 = g->edx;
        edx = t12;
    }
    else
    {
        eax = rd32(self + 0xcu);
        edx = t1;
        wr32(sp0 - 0x40u, COW_IMG(0x1036bf18u));
        g->edx = edx;
        g->esp = sp0 - 0x3cu;
        cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x30u, 1, COW_IMG(0x1036bf18u));
        t2 = g->edx;
        edx = t2;
    }
    wr32(sp0 - 0x40u, sp0 - 0x30u);
    g->eax = sp0 - 0x30u;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t13 = cow_thiscall(g, COW_IMG(0x101091b0u), arg1, 1, sp0 - 0x30u);
    t14 = g->edx;
    cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x30u, 0);
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    return arg1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010abb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010abb0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

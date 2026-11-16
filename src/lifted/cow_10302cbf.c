/* f_0x10302cbf - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_10302cbf(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(rd32(arg1 + 0x180u) + 0x30u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = rd32(arg1 + 0x180u);
        goto L_10302cf5;
    }
    ebx = rd32(arg1 + 0x180u);
    t1 = rd32(ebx + rd32(ebx + 0x40u) * 4u + 0x38u);
    g->eax = rd32(arg1 + 0x184u);
    g->edx = in_edx;
    t2 = rd32(arg1 + 0x184u);
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, rd32(t2 + 0xcu), rd32(ebx + 0x40u), 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
        goto L_10302dc3;
    }
    ecx = t1;
    edx = t4;
    wr32(ebx + 0x4cu, rd32(ebx + 0x4cu) + 1u);
    wr8(ebx + 0x30u, 1u);
L_10302cf5: ;
    if (rd32(ebx + 0x44u) == 0u) goto L_10302d45;
    eax = rd32(ebx + 0x44u);
    if (eax == 1u) goto L_10302d6c;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10302dc2;
    }
    t5 = rd32(ebx + 0x48u);
    t6 = rd32(ebx + rd32(ebx + 0x40u) * 4u + 0x38u);
    g->edx = edx;
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(arg1 + 0x188u) + 4u), rd32(ebx + 0x40u), 0);
    t7 = g->edx;
    if (rd32(ebx + 0x34u) < rd32(ebx + 0x48u))
    {
        eax = rd32(ebx + 0x34u);
        edx = t7;
        goto L_10302dc2;
    }
    edx = t7;
    wr32(ebx + 0x44u, 0u);
    if (rd32(arg3) >= arg4)
    {
        eax = arg4;
        goto L_10302dc2;
    }
    ecx = arg3;
L_10302d45: ;
    wr32(ebx + 0x34u, 0u);
    t8 = rd32(arg1 + 0x114u) - 1u;
    wr32(ebx + 0x48u, t8);
    if (rd32(ebx + 0x4cu) == rd32(arg1 + 0x118u))
    {
        eax = rd32(ebx + 0x4cu);
        g->esi = arg1;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_stdcall(g, COW_IMG(0x10302bc1u), 0);
        t9 = g->edx;
        edx = t9;
    }
    wr32(ebx + 0x44u, 1u);
L_10302d6c: ;
    t10 = rd32(ebx + 0x48u);
    t11 = rd32(ebx + rd32(ebx + 0x40u) * 4u + 0x38u);
    g->edx = edx;
    t12 = rd32(ebx + 0x40u);
    g->esp = sp0 - 0x2cu;
    cow_thiscall(g, rd32(rd32(arg1 + 0x188u) + 4u), t12, 0);
    t13 = g->ecx;
    t14 = g->edx;
    if (rd32(ebx + 0x34u) < rd32(ebx + 0x48u))
    {
        eax = rd32(ebx + 0x34u);
        edx = t14;
    }
    else
    {
        eax = rd32(ebx + 0x34u);
        ecx = t13;
        edx = t14;
        esi = ebx + 0x34u;
        if (rd32(ebx + 0x4cu) == 1u)
        {
            g->edi = arg1;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_stdcall(g, COW_IMG(0x10302aedu), 0);
            t15 = g->edx;
            edx = t15;
        }
        wr32(ebx + 0x40u, rd32(ebx + 0x40u) ^ 1u);
        wr8(ebx + 0x30u, 0u);
        t16 = rd32(arg1 + 0x114u) + 1u;
        wr32(esi, t16);
        t17 = rd32(arg1 + 0x114u) + 2u;
        wr32(ebx + 0x48u, t17);
        wr32(ebx + 0x44u, 2u);
        eax = 2u;
    }
L_10302dc2: ;
L_10302dc3: ;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10302cbf(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10302cbf(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

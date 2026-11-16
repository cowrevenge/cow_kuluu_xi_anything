/* f_0x1003af10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1003af10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 4u, self);
    if ((rd32(arg2 + 0x24u) & 0x7fu) == 1u)
    {
        eax = rd32(arg2 + 0x24u) & 0x7fu;
        ecx = arg2;
    }
    else
    {
        eax = rd32(arg2 + 0x24u) & 0x7fu;
        if (rd32(arg2 + 0x28u) == 0u)
        {
            ecx = 0u;
        }
        else
        {
            ecx = rd32(arg2 + 0x28u);
            ecx = rd32(ecx);
        }
    }
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0x20u);
    wr32(sp0 - 0x10u, ecx);
    wr32(sp0 - 0x14u, sp0 + 8u);
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10072430u), eax, g->ecx, g->edx, 0, 4, sp0 + 8u, ecx, 0x20u, 0u);
    if (rd32(t1) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(t1);
        eax = rd32(eax);
    }
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (eax == 0u) goto L_1003afc6;
    edi = eax;
L_1003af59: ;
    eax = arg1;
    ecx = 0u;
    esi = edi + 0x31u - arg1;
L_1003af62: ;
    if (rd8(eax + esi) != (uint32_t)(int8_t)rd8(eax))
    {
        edx = rd8(eax + esi);
        goto L_1003af75;
    }
    edx = rd8(eax + esi);
    if ((int32_t)(ecx + 1u) < 16)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_1003af62;
    }
    ecx = ecx + 1u;
L_1003af75: ;
    if (ecx != 0x10u) goto L_1003af98;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x1003aab0u), rd32(sp0 - 4u), 0);
    t3 = g->edx;
    if (rd32(t2) == 0u)
    {
        edx = t3;
        goto L_1003af98;
    }
    eax = t2;
    ecx = rd32(t2);
    edx = t3;
L_1003af89: ;
    if (rd32(ecx + 8u) == edi) goto L_1003afd0;
    if (rd32(ecx + 0x38u) != 0u)
    {
        eax = ecx + 0x38u;
        ecx = rd32(ecx + 0x38u);
        goto L_1003af89;
    }
L_1003af98: ;
    if (rd32(edi + 8u) == 0u)
    {
        ecx = 0u;
    }
    else
    {
        eax = rd32(edi + 8u);
        ecx = rd32(eax);
    }
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0x20u);
    wr32(sp0 - 0x20u, ecx);
    wr32(sp0 - 0x24u, sp0 + 4u);
    g->esp = sp0 - 0x14u;
    t4 = cow_call_regs(g, COW_IMG(0x10072430u), sp0 + 4u, g->ecx, g->edx, 0, 4, sp0 + 4u, ecx, 0x20u, 0u);
    if (rd32(t4) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(t4);
        eax = rd32(eax);
    }
    if (eax != 0u)
    {
        edi = eax;
        goto L_1003af59;
    }
L_1003afc6: ;
    return 0u;
L_1003afd0: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return rd32(eax);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003af10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003af10(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */

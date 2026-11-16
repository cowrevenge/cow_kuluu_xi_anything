/* f_0x10105ab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10105ab0(Guest* g)
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg2) == 0u)
    {
        edi = arg2;
        goto L_10105b63;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg2);
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        ecx = (uint32_t)(int8_t)eax;
        eax = rd8((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        g->eax = (uint32_t)(int8_t)eax;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), self, 3, (uint32_t)(int8_t)eax, 8u, in_edi);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    if (eax != 0u) goto L_10105b29;
    if (rd32(COW_IMG(0x10364884u)) == 0u) goto L_10105b6f;
    esi = COW_IMG(0x10364880u);
L_10105b01: ;
    t4 = rd32(esi + 4u);
    g->ebx = arg1;
    g->edx = edx;
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x10105520u), t4, ecx, g->edx, 1, 6, arg1, arg2, t4, in_edi, in_esi, in_ebx);
    t6 = g->edx;
    if (t5 != 0u)
    {
        eax = t5;
        goto L_10105b1d;
    }
    eax = t5;
    edx = t6;
    if (rd32(esi + 0xcu) != 0u)
    {
        ecx = rd32(esi + 0xcu);
        esi = esi + 8u;
        goto L_10105b01;
    }
    esi = esi + 8u;
L_10105b1d: ;
    wr32(arg3, eax);
    g->ebx = in_ebx;
    return rd32(esi);
L_10105b29: ;
    if (rd8(arg2) == 0u)
    {
        edi = arg2;
        goto L_10105b63;
    }
    eax = (eax & 0xffffff00u) | rd8(arg2);
    edi = arg2;
L_10105b2f: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        g->eax = eax;
        g->esp = sp0 - 8u;
        t7 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)eax, 8u, in_edi);
        t8 = g->ecx;
        eax = t7;
        ecx = t8;
    }
    if (eax == 0u) goto L_10105b63;
    if (rd8(edi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 1u);
        edi = edi + 1u;
        goto L_10105b2f;
    }
    edi = edi + 1u;
L_10105b63: ;
    wr32(arg3, edi);
    g->ebx = in_ebx;
    return rd32(COW_IMG(0x10364880u));
L_10105b6f: ;
    wr32(arg3, 0u);
    g->ebx = in_ebx;
    return rd32(COW_IMG(0x10364880u));
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10105ab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10105ab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

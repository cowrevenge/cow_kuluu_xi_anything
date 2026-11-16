/* f_0x10105520 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10105520(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd8(arg2) == 0u) goto L_101055e5;
    eax = (in_eax & 0xffffff00u) | rd8(arg2);
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        ecx = (uint32_t)(int8_t)eax;
        eax = rd8((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), self, 3, (uint32_t)(int8_t)eax, 8u, in_edi);
        t2 = g->ecx;
        t3 = g->edx;
        eax = t1;
        ecx = t2;
        edx = t3;
    }
    if (eax != 0u) goto L_101055e5;
    if (rd8(arg2) != 0x22u)
    {
        ebx = in_ebx & 0xffffff00u;
        esi = arg2;
    }
    else
    {
        ebx = (in_ebx & 0xffffff00u) | 0x22u;
        esi = arg2 + 1u;
    }
    if (rd8(esi) == 0u)
    {
        edi = arg3;
        goto L_101055ca;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    edi = arg3;
L_10105575: ;
    if ((uint8_t)ebx == (uint8_t)eax) goto L_101055ca;
    if ((uint8_t)ebx != 0u) goto L_101055a9;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        ecx = (uint32_t)(int8_t)eax;
        eax = rd8((uint32_t)(int8_t)eax * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        edx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, (uint32_t)(int8_t)eax, 8u, in_edi);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    if (eax != 0u) goto L_101055ca;
L_101055a9: ;
    if (rd8(edi) == 0u) goto L_101055e5;
    t7 = rd8(esi);
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, ecx, edx, 1, 1, (uint32_t)(int8_t)t7);
    t9 = g->edx;
    if (t8 != (uint32_t)(int8_t)rd8(edi)) goto L_101055e5;
    eax = t8;
    ecx = (uint32_t)(int8_t)rd8(edi);
    edx = t9;
    if (rd8(esi + 1u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(esi + 1u);
        esi = esi + 1u;
        edi = edi + 1u;
        goto L_10105575;
    }
    esi = esi + 1u;
    edi = edi + 1u;
L_101055ca: ;
    if (rd8(edi) != 0u) goto L_101055e5;
    if ((uint8_t)ebx == 0u) goto L_101055df;
    if (rd8(esi) == 0u) goto L_101055df;
    return esi + 1u;
L_101055df: ;
    return esi;
L_101055e5: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10105520(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10105520(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

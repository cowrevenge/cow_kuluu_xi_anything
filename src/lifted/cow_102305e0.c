/* f_0x102305e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102305e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    if (rd8(self + 0x1bu) == 0u) goto L_1023069b;
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x1bu);
    if (rd32(self + 4u) == 0u) goto L_1023069b;
    if (rd16(self + (uint8_t)eax * 2u + 0xau) == 0u) goto L_1023069b;
    eax = rd16(self + (uint8_t)eax * 2u + 0xau);
    g->eax = (uint16_t)eax;
    g->edx = in_edx;
    t1 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t1, 1, (uint16_t)eax);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 0u) goto L_1023069b;
    eax = t2;
    ecx = t3;
    edx = t4;
    if (rd32(eax + 0x1578u) == 0u) goto L_1023069b;
    ebp = rd32(eax + 0x1578u);
    if (rd16(ebp) > 1u)
    {
        ecx = (ecx & 0xffff0000u) | rd16(ebp);
        goto L_10230645;
    }
    wr16(self + 8u, 0u);
    wr16(self + 0xau, 0u);
    return;
L_10230645: ;
    if ((int32_t)(uint16_t)ecx <= 0)
    {
        eax = 0u;
        ecx = (uint16_t)ecx;
        edi = 0u;
    }
    else
    {
        ecx = (uint16_t)ecx;
        eax = 0u;
        edx = ebp + 4u;
        ebx = rd16(self + rd8(self + 0x1bu) * 2u + 0xcu);
L_1023065e: ;
        if (rd16(edx) == (uint16_t)ebx) goto L_1023066d;
        if ((int32_t)(eax + 1u) < (int32_t)ecx)
        {
            eax = eax + 1u;
            edx = edx + 0x14u;
            goto L_1023065e;
        }
        eax = eax + 1u;
        edx = edx + 0x14u;
        edi = 0u;
L_1023066f: ;
    }
    if ((int32_t)edi < (int32_t)ecx) goto L_10230682;
    wr16(self + 8u, 0u);
    wr16(self + 0xau, 0u);
    return;
L_1023066d: ;
    edi = eax;
    goto L_1023066f;
L_10230682: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x10230510u), 2, ebp, edi);
    t6 = g->ecx;
    t7 = g->edx;
    wr16(self + 8u, (uint16_t)t5);
    g->esp = sp0 - 4u;
    t8 = cow_cdecl(g, COW_IMG(0x10230580u), 7, ebp, edi, ebp, edi, in_edi, in_esi, in_ebp);
    wr16(self + 0xau, (uint16_t)t8);
L_1023069b: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102305e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102305e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

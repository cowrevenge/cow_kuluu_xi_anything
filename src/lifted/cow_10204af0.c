/* f_0x10204af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10204af0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;

    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1020a420u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t3;
        goto L_10204c22;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    edi = t1;
    if (rd8(edi + 0x26u) < 0xau) goto L_10204c1d;
    if (rd32(COW_IMG(0x106643a8u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x106643a8u));
        goto L_10204c1d;
    }
    ecx = rd32(COW_IMG(0x106643a8u));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x10203190u), ecx, 0);
    t5 = g->ecx;
    t6 = g->edx;
    if (rd32(COW_IMG(0x10664400u)) != 0u)
    {
        ecx = t5;
        edx = t6;
        esi = t4;
    }
    else
    {
        ecx = t5;
        edx = t6;
        esi = t4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t7 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x100u, in_esi, in_ebp);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(COW_IMG(0x10664400u), t7);
        ecx = t8;
        edx = t9;
    }
    if (esi == 0u) goto L_10204bcc;
    eax = edi + 8u;
    ebx = in_ebx;
    ebp = edi + 8u;
    esi = esi + 2u;
L_10204b4d: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        edx = (edx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_10204b75;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    edx = (edx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)ecx == 0u) goto L_10204b71;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        edx = (edx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_10204b75;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    edx = (edx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_10204b4d;
    }
L_10204b71: ;
    eax = 0u;
L_10204b7a: ;
    if (eax != 0u) goto L_10204bcc;
    t10 = (eax & 0xffffff00u) | rd8(edi + 0x21u);
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t11 = cow_cdecl(g, COW_IMG(0x101cc590u), 1, t10);
    t12 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10153180u), 6, rd32(COW_IMG(0x10664400u)), 0x100u, 0xau, 0x72u, 1u, ebp);
    g->edx = rd32(COW_IMG(0x10664400u));
    t13 = rd32(COW_IMG(0x10664400u));
    g->esp = sp0 - 0xcu;
    t14 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10204aa0u), edi, t13, 0u, 0u, 1u, 0u);
    t15 = g->edx;
    g->edx = t15;
    return (t14 & 0xffffff00u) | 1u;
L_10204b75: ;
    eax = -cf + 1u - cf;
    goto L_10204b7a;
L_10204bcc: ;
    t16 = rd8(edi + 0x21u);
    g->esp = sp0 - 0xcu;
    t17 = cow_cdecl(g, COW_IMG(0x101cc590u), 1, t16);
    g->edx = rd32(COW_IMG(0x10664400u));
    t18 = rd32(COW_IMG(0x10664400u));
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x10153180u), 6, t18, 0x100u, 0xau, 0x71u, 1u, edi + 8u);
    t19 = g->edx;
    g->edx = t19;
    t20 = rd32(COW_IMG(0x10664400u));
    g->esp = sp0 - 0xcu;
    t21 = cow_thiscall(g, COW_IMG(0x10210e30u), rd32(COW_IMG(0x10664520u)), 7, COW_IMG(0x10204a50u), edi, t20, 0u, 0u, 1u, 0u);
    t22 = g->edx;
    g->edx = t22;
    return (t21 & 0xffffff00u) | 1u;
L_10204c1d: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t23 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t24 = g->edx;
    eax = t23;
    edx = t24;
L_10204c22: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10204af0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10204af0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */

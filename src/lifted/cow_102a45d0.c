/* f_0x102a45d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a45d0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(COW_IMG(0x109a2858u)) != 0u)
    {
        ebp = rd32(COW_IMG(0x109a2858u));
        goto L_102a45f9;
    }
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x102a4010u), 0);
    wr32(COW_IMG(0x109a2858u), t1);
    eax = t1;
    ecx = arg1;
    edx = t1 + 0x40u;
L_102a45ed: ;
    t2 = rd8(ecx);
    wr8(edx, (uint8_t)t2);
    if ((uint8_t)t2 != 0u)
    {
        eax = (eax & 0xffffff00u) | t2;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_102a45ed;
    }
    edx = edx + 1u;
L_102a4654: ;
    t5 = rd32(COW_IMG(0x109a2858u)) + 0x40u;
    t6 = rd32(COW_IMG(0x109a2858u)) + 0x24u;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x102a46f0u), t5, 2, t6, t5);
    wr32(rd32(COW_IMG(0x109a2858u)) + 0x3cu, t7);
    if (rd32(rd32(COW_IMG(0x109a2858u)) + 0x3cu) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x109a2858u)) + 0x3cu);
        goto L_102a4681;
    }
    eax = rd32(rd32(COW_IMG(0x109a2858u)) + 0x3cu);
    return eax;
L_102a45f9: ;
    eax = in_eax;
    ecx = ebp + 0x40u;
    edx = in_edx;
    ebx = in_ebx;
    esi = arg1;
L_102a4604: ;
    if (rd8(ecx) != rd8(esi))
    {
        edx = (edx & 0xffffff00u) | rd8(ecx);
        cf = rd8(ecx) < rd8(esi);
        goto L_102a462c;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx);
    edx = (edx & 0xffffff00u) | rd8(ecx);
    ebx = (ebx & 0xffffff00u) | rd8(esi);
    if ((uint8_t)edx == 0u) goto L_102a4628;
    if (rd8(ecx + 1u) != rd8(esi + 1u))
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
        cf = rd8(ecx + 1u) < rd8(esi + 1u);
        goto L_102a462c;
    }
    eax = (eax & 0xffffff00u) | rd8(ecx + 1u);
    edx = (edx & 0xffffff00u) | rd8(ecx + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(esi + 1u);
    if ((uint8_t)edx != 0u)
    {
        ecx = ecx + 2u;
        esi = esi + 2u;
        goto L_102a4604;
    }
L_102a4628: ;
    ecx = 0u;
L_102a4631: ;
    if (ecx == 0u) goto L_102a46dd;
    g->esp = sp0 - 8u;
    t3 = cow_stdcall(g, COW_IMG(0x102a4010u), 0);
    wr32(COW_IMG(0x109a2858u), t3);
    eax = t3;
    ecx = arg1;
    edx = t3 + 0x40u;
L_102a464a: ;
    t4 = rd8(ecx);
    wr8(edx, (uint8_t)t4);
    if ((uint8_t)t4 != 0u)
    {
        eax = (eax & 0xffffff00u) | t4;
        ecx = ecx + 1u;
        edx = edx + 1u;
        goto L_102a464a;
    }
    edx = edx + 1u;
    goto L_102a4654;
L_102a462c: ;
    ecx = -cf + 1u - cf;
    goto L_102a4631;
L_102a4681: ;
    wr32(eax + 0x2cu, 0u);
    t8 = rd32(rd32(COW_IMG(0x109a2858u)) + 0x24u);
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x1031f0f0u), 3, t8, 0u, 1u);
    wr32(rd32(COW_IMG(0x109a2858u)) + 0x28u, t9);
    t10 = rd32(rd32(COW_IMG(0x109a2858u)) + 0x28u) + rd32(rd32(rd32(COW_IMG(0x109a2858u)) + 0x3cu) + 0x24u) * rd32(rd32(rd32(COW_IMG(0x109a2858u)) + 0x3cu) + 0x1cu) * 4u;
    t11 = rd32(rd32(COW_IMG(0x109a2858u)) + 0x24u);
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x1031f0f0u), 3, t11, t10, 1u);
    t13 = rd32(rd32(COW_IMG(0x109a2858u)) + 0x3cu);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102a4800u), 3, t13, t11, t10);
    ebp = rd32(COW_IMG(0x109a2858u));
L_102a46dd: ;
    return ebp;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102a45d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102a45d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

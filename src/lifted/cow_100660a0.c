/* f_0x100660a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100660a0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10353c24u)) == 0x13u)
    {
        edi = 0u;
        goto L_100660f7;
    }
    ecx = self;
    ebx = in_ebx;
    ebp = COW_IMG(0x10353c24u);
    edi = 0u;
L_100660b9: ;
    eax = rd32(ebp - 0xcu);
    esi = arg2;
L_100660be: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        ebx = (ebx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_100660e2;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_100660de;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_100660e2;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_100660be;
    }
L_100660de: ;
    eax = 0u;
L_100660e7: ;
    if (eax == 0u) goto L_10066125;
    if (rd32(ebp + 0x10u) != 0x13u)
    {
        ebp = ebp + 0x10u;
        edi = edi + 1u;
        goto L_100660b9;
    }
    edi = edi + 1u;
L_100660f7: ;
    wr32(COW_IMG(0x10353c18u) + edi * 0x10u, arg2);
    t5 = rd32(COW_IMG(0x10353c18u) + edi * 0x10u);
    wr32(arg1, t5);
    t6 = rd32(COW_IMG(0x10353c1cu) + edi * 0x10u);
    wr32(arg1 + 4u, t6);
    t7 = rd32(COW_IMG(0x10353c20u) + edi * 0x10u);
    wr32(arg1 + 8u, t7);
    t8 = rd32(COW_IMG(0x10353c24u) + edi * 0x10u);
    wr32(arg1 + 0xcu, t8);
    return;
L_100660e2: ;
    eax = -cf + 1u - cf;
    goto L_100660e7;
L_10066125: ;
    t1 = rd32(COW_IMG(0x10353c18u) + edi * 0x10u);
    wr32(arg1, t1);
    t2 = rd32(COW_IMG(0x10353c1cu) + edi * 0x10u);
    wr32(arg1 + 4u, t2);
    t3 = rd32(COW_IMG(0x10353c20u) + edi * 0x10u);
    wr32(arg1 + 8u, t3);
    t4 = rd32(COW_IMG(0x10353c24u) + edi * 0x10u);
    wr32(arg1 + 0xcu, t4);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100660a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100660a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* f_0x1022dc70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1022dc70(Guest* g)
{
    uint32_t cf;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    ecx = self;
    edx = self;
    ebx = in_ebx;
    edi = 0u;
L_1022dc7c: ;
    t1 = (uint32_t)(int8_t)rd8(COW_IMG(0x10386984u) + edi);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t2 = cow_cdecl(g, COW_IMG(0x1022dad0u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        ecx = t3;
        edx = t4;
        goto L_1022dcca;
    }
    ecx = t3;
    edx = t4;
    if (rd32(COW_IMG(0x1066833cu) + edi * 4u) == 0u) goto L_1022dcca;
    esi = rd32(COW_IMG(0x1066833cu) + edi * 4u);
    eax = arg1;
L_1022dc9d: ;
    if (rd8(eax) != rd8(esi))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax);
        ebx = (ebx & 0xffffff00u) | rd8(eax);
        cf = rd8(eax) < rd8(esi);
        goto L_1022dcc1;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax);
    ebx = (ebx & 0xffffff00u) | rd8(eax);
    if ((uint8_t)ecx == 0u) goto L_1022dcbd;
    if (rd8(eax + 1u) != rd8(esi + 1u))
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
        ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
        cf = rd8(eax + 1u) < rd8(esi + 1u);
        goto L_1022dcc1;
    }
    ecx = (ecx & 0xffffff00u) | rd8(eax + 1u);
    ebx = (ebx & 0xffffff00u) | rd8(eax + 1u);
    if ((uint8_t)ecx != 0u)
    {
        eax = eax + 2u;
        esi = esi + 2u;
        goto L_1022dc9d;
    }
L_1022dcbd: ;
    eax = 0u;
L_1022dcc6: ;
    if (eax == 0u) goto L_1022dce1;
L_1022dcca: ;
    if ((int32_t)(edi + 1u) < 15)
    {
        edi = edi + 1u;
        goto L_1022dc7c;
    }
    t5 = (uint32_t)(int8_t)rd8(COW_IMG(0x1047fe8eu));
    wr32(edx + 0x70u, t5);
    return;
L_1022dcc1: ;
    eax = -cf + 1u - cf;
    goto L_1022dcc6;
L_1022dce1: ;
    wr32(edx + 0x70u, edi);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022dc70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022dc70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

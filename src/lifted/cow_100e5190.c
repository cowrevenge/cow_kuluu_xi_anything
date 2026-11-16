/* f_0x100e5190 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100e5190(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x50u, COW_IMG(0x100e5a80u));
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 1u)
    {
        eax = t1;
        goto L_100e5228;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0xc9u, COW_IMG(0x100e5af0u));
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 1u)
    {
        eax = t4;
        goto L_100e5228;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t7 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x4fu, COW_IMG(0x100e5ac0u));
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 != 1u)
    {
        eax = t7;
        goto L_100e5228;
    }
    eax = t7;
    ecx = t8;
    edx = t9;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t10 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x116u, COW_IMG(0x100e5e50u));
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 1u)
    {
        eax = t10;
        goto L_100e5228;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x117u, COW_IMG(0x100e5e80u));
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 1u)
    {
        eax = t13;
        goto L_100e5228;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t16 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x11bu, COW_IMG(0x100e5f00u));
    t17 = g->ecx;
    t18 = g->edx;
    if ((uint8_t)t16 != 1u)
    {
        eax = t16;
        goto L_100e5228;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    g->eax = eax;
    g->esp = sp0;
    t19 = cow_cdecl(g, COW_IMG(0x100fc3b0u), 2, 0x11cu, COW_IMG(0x100e5f30u));
    if ((uint8_t)t19 == 1u) goto L_100e522b;
    eax = t19;
L_100e5228: ;
    return eax & 0xffffff00u;
L_100e522b: ;
    edi = rd32(COW_IMG(0x104dfd98u)) + 0x19a54u;
    eax = 0u;
    ecx = 0xe0u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = 0u;
    edx = 0x10u;
L_100e524b: ;
    wr32(eax * 8u + rd32(COW_IMG(0x104dfd98u)) + 0x19a54u, eax);
    wr8(eax * 8u + rd32(COW_IMG(0x104dfd98u)) + 0x19a58u, 0u);
    wr32(ecx + rd32(COW_IMG(0x104dfd98u)) + 0x19adcu, 0x10u);
    wr16(ecx + rd32(COW_IMG(0x104dfd98u)) + 0x19ae0u, 0u);
    if (edx != 1u)
    {
        eax = eax + 1u;
        ecx = ecx + 0x24u;
        edx = edx - 1u;
        goto L_100e524b;
    }
    eax = eax + 1u;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e5190(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e5190(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */

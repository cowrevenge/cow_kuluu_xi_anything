/* f_0x102ae020 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_102ae020(Guest* g)
{
    uint32_t eax;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg1 + 0x34u) == 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = self;
        goto L_102ae153;
    }
    eax = rd32(arg1 + 0x34u);
    if (rd32(eax + 0x14u) == 0u)
    {
        ecx = rd32(eax + 0x14u);
        goto L_102ae153;
    }
    ecx = rd32(eax + 0x14u);
    if ((int32_t)arg2 < 0) goto L_102ae129;
    if ((int32_t)arg2 >= (int32_t)rd32(arg1 + 0x44u)) goto L_102ae129;
    if (arg4 != 0u) goto L_102ae07f;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t2 = g->ecx;
    t3 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf1b4u), COW_IMG(0x103b379cu));
    return;
L_102ae07f: ;
    if (rd32(eax + 0x54u) != 0u)
    {
        edx = rd32(eax + 0x54u);
        goto L_102ae0ab;
    }
    edx = rd32(eax + 0x54u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t5 = g->ecx;
    t6 = g->edx;
    g->esp = sp0 - 0x14u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf050u), COW_IMG(0x103b379cu));
    return;
L_102ae0ab: ;
    if ((int32_t)rd32(arg2 * 4u + rd32(arg1 + 0x48u)) >= 4)
    {
        ecx = rd32(arg1 + 0x48u);
        edi = rd32(arg2 * 4u + rd32(arg1 + 0x48u));
        goto L_102ae0dd;
    }
    ecx = rd32(arg1 + 0x48u);
    edi = rd32(arg2 * 4u + rd32(arg1 + 0x48u));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t8 = g->ecx;
    t9 = g->edx;
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf188u), edi);
    return;
L_102ae0dd: ;
    if ((int32_t)arg2 <= 0)
    {
        eax = 0u;
    }
    else
    {
        eax = 0u;
        esi = arg2;
L_102ae0e4: ;
        if (esi != 1u)
        {
            eax = eax + rd32(ecx);
            ecx = ecx + 4u;
            esi = esi - 1u;
            goto L_102ae0e4;
        }
        eax = eax + rd32(ecx);
    }
    if (arg5 == 0u)
    {
        eax = eax * 3u;
        goto L_102ae112;
    }
    eax = eax * 3u;
    t10 = eax * 4u + edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102ae330u), 5, t10, edi, arg3, arg4, arg5);
    return;
L_102ae112: ;
    t11 = eax * 4u + edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102ae180u), 4, t11, edi, arg3, arg4);
    return;
L_102ae129: ;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t13 = g->ecx;
    t14 = rd32(arg1 + 0x44u);
    g->esp = sp0 - 0x1cu;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bf140u), arg2);
    return;
L_102ae153: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bef68u));
    t16 = g->ecx;
    t17 = g->edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103beaa4u), COW_IMG(0x103bf17cu));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ae020(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ae020(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

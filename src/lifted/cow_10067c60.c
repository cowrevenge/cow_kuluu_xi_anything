/* f_0x10067c60 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 2

   appends the string at arg+4 to the string at self+4 in a 1KB stack buffer, then calls FUN_100679e0 with that buffer.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_10067c60(Guest* g, uint32_t self, uint32_t arg)
{
    const uint32_t sp0 = g->esp;
    const uint32_t frame = cow_frame(g, sp0, 0x410u);
    const uint32_t buf = frame + 0x10u;   /* original buffer is at sp0 - 0x400 */

    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t edi;
    uint32_t ebp;
    uint32_t src;
    uint32_t dst;
    uint32_t len;
    uint32_t n;

    /*
       10067c6f: mov eax, dword ptr [ebx + 4]
       10067c73: sub edx, eax
       10067c75: mov cl, byte ptr [eax]
       10067c77: mov byte ptr [edx + eax], cl
       10067c7a: inc eax
       10067c7b: test cl, cl
       10067c7d: jne 0x10067c75

       Copies the NUL-terminated string at self+4 into buf, including the NUL.
    */
    src = rd32(self + 4u);
    eax = src;
    edx = buf - src;

    for (;;)
    {
        uint32_t c = rd8(eax) & 0xffu;
        wr8(edx + eax, c);
        eax = eax + 1u;
        if (c == 0u)
            break;
    }

    /*
       10067c7f: mov eax, dword ptr [esp + 0x414]
       10067c86: or ecx, 0xffffffff
       10067c89: lea edx, [esp + 0x10]
       10067c8d: mov edi, dword ptr [eax + 4]
       10067c90: xor eax, eax
       10067c92: repne scasb al, byte ptr es:[edi]
       10067c94: not ecx
       10067c96: sub edi, ecx
       10067c98: mov esi, edi
       10067c9a: mov ebp, ecx

       Computes strlen(arg+4) + 1 and leaves esi pointing at that string.
    */
    edi = rd32(arg + 4u);
    ecx = 0xFFFFFFFFu;
    eax = 0u;

    for (;;)
    {
        uint32_t c = rd8(edi) & 0xffu;
        ecx = ecx - 1u;
        edi = edi + 1u;
        if (c == 0u)
            break;
        if (ecx == 0u)
            break;
    }

    ecx = ~ecx;
    edi = edi - ecx;
    esi = edi;
    ebp = ecx;

    /*
       10067c9c: mov edi, edx
       10067c9e: or ecx, 0xffffffff
       10067ca1: repne scasb al, byte ptr es:[edi]
       10067ca3: mov ecx, ebp
       10067ca5: dec edi

       Finds the NUL terminator already present in buf, then positions EDI at that NUL.
    */
    edi = buf;
    ecx = 0xFFFFFFFFu;
    eax = 0u;

    for (;;)
    {
        uint32_t c = rd8(edi) & 0xffu;
        ecx = ecx - 1u;
        edi = edi + 1u;
        if (c == 0u)
            break;
        if (ecx == 0u)
            break;
    }

    ecx = ebp;
    edi = edi - 1u;

    /*
       10067ca6: shr ecx, 2
       10067ca9: rep movsd dword ptr es:[edi], dword ptr [esi]
       10067cab: mov ecx, ebp
       10067cad: and ecx, 3
       10067cb0: rep movsb byte ptr es:[edi], byte ptr [esi]

       Appends ebp bytes from esi to edi.
    */
    n = ecx >> 2;
    for (; n != 0u; n = n - 1u)
    {
        wr32(edi, rd32(esi));
        edi = edi + 4u;
        esi = esi + 4u;
    }

    ecx = ebp & 3u;
    for (; ecx != 0u; ecx = ecx - 1u)
    {
        wr8(edi, rd8(esi));
        edi = edi + 1u;
        esi = esi + 1u;
    }

    /*
       10067cb2: lea ecx, [esp + 0x10]
       10067cb6: push ecx
       10067cb7: mov ecx, ebx
       10067cb9: call 0x100679e0

       The original has EDX = buf before the call. FUN_100679e0 may clobber EDX,
       so leave g->edx exactly as the callee leaves it.
    */
    g->edx = buf;
    cow_thiscall(g, COW_IMG(0x100679e0u), self, 1u, buf);

    /*
       10067cbe: pop edi
       10067cbf: pop esi
       10067cc0: mov eax, ebx
       10067cc2: pop ebp
       10067cc3: pop ebx
       10067cc4: add esp, 0x400
       10067cca: ret 4
    */
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10067c60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10067c60(g, g->ecx, rd32(sp0 + 4u));
    g->esp = sp0;
    rt_return(g, result, 4u);
}
/* COW_ADAPTER END */
